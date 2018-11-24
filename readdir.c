/* readdir.c    readdir implementation
 *
 */
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>

#define DIRENT_HEADER_SIZE	(sizeof(uint32_t) + sizeof(uint16_t) + (sizeof(uint8_t) * 2))

struct dirent *readdir(DIR * dir)
{
    static struct dirent de;
    bool be;
    int r = 0;
    assert(dir);
//    printf("readdir(dir->dd_fd=%d,dir->dd_ino=%u, dir->dd_loc=%u)\r\n", dir->dd_fd, dir->dd_ino, dir->dd_loc);
    memset(&de, 0, sizeof(struct dirent));
    assert(dir->dd_loc ==	lseek(dir->dd_fd, dir->dd_loc, SEEK_SET));
//    printf("dd->loc = %u\r\n", dir->dd_loc);
//	lseek(dir->dd_fd, dir->dd_loc, SEEK_SET);

    r = read(dir->dd_fd, &de, DIRENT_HEADER_SIZE);
//   printf("r = %d\r\n", r);
    be = is_big_endian();
    if (be) {
        de.d_ino = nm_uint32(de.d_ino);
        de.d_reclen = nm_uint16(de.d_reclen);
    }
    memset(&de.d_name, 0, EXT2_NAME_LEN+1);
    r = read(dir->dd_fd, &de.d_name, de.name_len);
    /*
    printf("de.d_ino = %u ", de.d_ino);
    printf("de.d_reclen = %u ", de.d_reclen);
    printf("de.name_len = %u ", de.name_len);
    printf("de.file_type = %u ", de.file_type);
    printf("de.d_name = [%s]\r\n", de.d_name);
    */
//	printf("%u + %u = %u == %u\r\n", DIRENT_HEADER_SIZE, de.name_len, DIRENT_HEADER_SIZE + de.name_len, de.d_reclen);
//	ptr_dump(&de, de.d_reclen);

    if (de.d_reclen == 0) {
        return NULL;
    }

    dir->dd_loc = dir->dd_loc + de.d_reclen;
//    printf("new dd->loc = %u\r\n", dir->dd_loc);
    return (&de);
}
