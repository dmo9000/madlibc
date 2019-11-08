CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar
CFLAGS=-Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs -nostdinc -Os -ffunction-sections -fdata-sections -I../../include/

all: malloctest 

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

malloctest:	../../crt0.o ../../libmadlibc.a malloctest.o
	/usr/local/gcc-68k/bin/m68k-elf-ld -T ../../uspace.lds -o malloctest --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  ../../crt0.o		\
		malloctest.o ../../libmadlibc.a /usr/local/gcc-68k/lib/gcc/m68k-elf/8.2.0/m68000/libgcc.a 

clean:
	rm -f *.o malloctest
