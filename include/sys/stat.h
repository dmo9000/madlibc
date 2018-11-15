struct stat
{
    short   st_mode;        /* flags */
    long    st_atime;       /* access time */
    long    st_mtime;       /* modification time */
    long    st_size;        /* file size in bytes */
		uint32_t	st_ino;
		uint32_t  st_nlink;
		uint32_t  st_uid;
		uint32_t  st_gid;
		uint32_t  st_rdev;	

};

#define S_ISUID  0004000
#define S_ISGID  0002000
#define S_ISVTX  0001000

#define S_IFMT         0x0600
#define S_IFDIR  				0040000

#define S_ISFIFO(m)	(((m) & S_IFMT) == S_IFIFO)
#define S_ISDIR(m)	(((m) & S_IFMT) == S_IFDIR)
