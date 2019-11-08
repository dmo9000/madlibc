CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar
CFLAGS=-Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs -nostdinc -Os -ffunction-sections -fdata-sections -I../../include/ -I../libvt/

all: reset 

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

reset:	../../crt0.o ../../libmadlibc.a reset.o
	/usr/local/gcc-68k/bin/m68k-elf-ld -T ../../uspace.lds -o reset --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  ../../crt0.o		\
		reset.o ../../libmadlibc.a ../libvt/libvt.a /usr/local/gcc-68k/lib/gcc/m68k-elf/8.2.0/m68000/libgcc.a 

clean:
	rm -f *.o reset
