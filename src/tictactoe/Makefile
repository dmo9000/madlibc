CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar
CFLAGS=-Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs -nostdinc -Os -ffunction-sections -fdata-sections -I../../include/

all: tictactoe 

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

tictactoe:	../../crt0.o ../../libmadlibc.a tictactoe.o
	/usr/local/gcc-68k/bin/m68k-elf-ld -T ../../uspace.lds -o tictactoe --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  ../../crt0.o		\
		tictactoe.o ../../libmadlibc.a ../libvt/libvt.a /usr/local/gcc-68k/lib/gcc/m68k-elf/11.2.0/m68000/libgcc.a 

clean:
	rm -f *.o tictactoe
