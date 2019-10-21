CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar
CFLAGS=-Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs \
						-nostdinc -O2 -ffunction-sections -fdata-sections -I../../include/ -I../../libgrx

all: firedemo 

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

firedemo:	../../crt0.o ../../libmadlibc.a firedemo.o
	/usr/local/gcc-68k/bin/m68k-elf-ld -T ../../uspace.lds -o firedemo --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  ../../crt0.o		\
		firedemo.o ../../libmadlibc.a ../../libgrx/libgrx.a /usr/local/gcc-68k/lib/gcc/m68k-elf/8.2.0/m68000/libgcc.a 

clean:
	rm -f *.o firedemo
