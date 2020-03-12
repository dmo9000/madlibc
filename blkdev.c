#include <bdos.h>
#include <stdlib.h>
#include <blkdev.h>
extern _bdos_vtable *bdvt;

int blkdevseek(uint8_t dev, off_t offset)
{
		printf("blkdevseek(%u, %lu)\n\r", dev, offset); 
		return 0;
}
int blkdevread(uint8_t dev, char *buffer, size_t len) 
{
		printf("blkdevread(%u, ..., %lu)\n\r", dev, len); 
		return 0;
}
int blkdevwrite(uint8_t dev, char *buffer, size_t len) 
{
		printf("blkdevwrite(%u, ..., %lu)\n\r", dev, len); 
		return 0;

}


