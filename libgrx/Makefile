CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar
CFLAGS=-Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs \
						-nostdinc -Os -ffunction-sections -fdata-sections -Iinclude -I/usr/local/madlibc/include

GRX_OBJS=pixel.o line.o box.o fillbox.o hardware.o

all:	$(GRX_OBJS) libgrx.a

install:
	sudo cp libgrx.a /usr/local/madlibc/lib/libgrx.a
	sudo cp grx.h /usr/local/madlibc/include/

clean:
	rm -f *.o *.a

libgrx.a: $(GRX_OBJS)
	$(AR) cru libgrx.a $(GRX_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

