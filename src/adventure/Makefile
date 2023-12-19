CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar
CFLAGS=-Os -Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs -nostdinc -Os -ffunction-sections -fdata-sections -I../../include/ -I../libvt/
ADVENTURE_OBJS=adventure.o parser.o dzx0.o verbs.o objects.o inventory.o go.o

all: adventure 

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

adventure:	../../crt0.o ../../libmadlibc.a $(ADVENTURE_OBJS) 
	/usr/local/gcc-68k/bin/m68k-elf-ld -T ../../uspace.lds -o adventure --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  ../../crt0.o		\
		$(ADVENTURE_OBJS) \
		../../libgrx/libgrx.a ../../libmadlibc.a ../libvt/libvt.a /usr/local/gcc-68k/lib/gcc/m68k-elf/11.2.0/m68000/libgcc.a 


raw/%.raw: png/%.png
	stream -storage-type char $< $@

raw/%.raw.zx0: raw/%.raw
	../ZX0/src/zx0.exe -f $< $@ 

clean:
	rm -f *.o adventure
