CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar
CFLAGS=-Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs -nostdinc -Os -ffunction-sections -fdata-sections -Iinclude

MADLIBC_OBJS=printf.o memset.o itoa.o strtoul.o memcpy.o strncmp.o dump.o \
			modules.o strerror.o puts.o putchar.o getchar.o strcmp.o strncpy.o memchr.o random.o

all: testfile.txt malltest libmadlibc.a md5sum 8mb

libmadlibc.a: $(MADLIBC_OBJS)
	$(AR) cru libmadlibc.a $(MADLIBC_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

malltest:	libmadlibc.a crt0.o malltest.o assert.o exit.o sbrk.o malloc.o perror.o
	/usr/local/gcc-68k/bin/m68k-elf-ld -T uspace.lds -o malltest --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  crt0.o malltest.o 	\
		assert.o exit.o sbrk.o malloc.o perror.o libmadlibc.a \
		/usr/local/gcc-68k/lib/gcc/m68k-elf/8.2.0/m68000/libgcc.a 
	#/usr/local/gcc-68k/bin/m68k-elf-objcopy -O srec malltest malltest.srec
	#/usr/local/gcc-68k/bin/m68k-elf-objcopy --redefine-sym entry=_start -O binary malltest malltest.out

md5sum:    libmadlibc.a crt0.o md5sum.o assert.o exit.o sbrk.o malloc.o fcntl_uspace.o fopen.o fread.o fclose.o ustdio.o perror.o
	/usr/local/gcc-68k/bin/m68k-elf-ld -T uspace.lds -o md5sum --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  crt0.o libmadlibc.a md5sum.o    \
		assert.o exit.o sbrk.o malloc.o fcntl_uspace.o fopen.o fread.o fclose.o	ustdio.o perror.o libmadlibc.a \
		/usr/local/gcc-68k/lib/gcc/m68k-elf/8.2.0/m68000/libgcc.a
	#/usr/local/gcc-68k/bin/m68k-elf-objcopy -O srec md5sum md5sum.srec
	#/usr/local/gcc-68k/bin/m68k-elf-objcopy --redefine-sym entry=_start -O binary md5sum md5sum.out


clean:
	rm -f shim *.out *.srec *.o malltest md5sum *.img hello?.txt

veryclean: clean
	rm -f testfile.txt
	
install:
	cp 8mb.img ~/git-local/68kp/8mb.img
	md5sum testfile.txt	
	sudo mkdir -p /usr/local/madlibc/lib
	sudo mkdir -p /usr/local/madlibc/include
	sudo cp uspace.lds /usr/local/madlibc/uspace.lds
	sudo cp crt0.o /usr/local/madlibc/crt0.o
	sudo cp libmadlibc.a /usr/local/madlibc/lib/libmadlibc.a
	sudo cp -rfp include/* /usr/local/madlibc/include

testfile.txt:
	cp /dev/null testfile.txt
	for FN1 in `seq 0 524` ; do \
    for FN2 in `seq 1 256`; do  \
      printf "%04x" $${FN1} >> testfile.txt ; \
      done  \
    done

1mb.bin:
	@dd if=/dev/urandom of=1mb.bin bs=1024 count=2048 1>/dev/null

8mb: testfile.txt 1mb.bin
	@dd if=/dev/zero of=8mb.img count=65536 bs=128
	@mke2fs ./8mb.img
	@sudo mount 8mb.img mnt
	@sudo chown -R dan:dan mnt
	@printf "Hello world 1\r\n" > hello1.txt 2>&1
	@printf "Hello world 2\r\n" > hello2.txt 2>&1
	@cp hello1.txt mnt/hello1.txt
	@cp hello2.txt mnt/hello2.txt
	@dd if=/dev/urandom of=mnt/12blocks.bin bs=1024 count=12 1>/dev/null 2>&1
	@dd if=/dev/urandom of=mnt/13blocks.bin bs=1024 count=13 1>/dev/null 2>&1
	@mkdir -p mnt/foo/bar/baz
	@dd if=/dev/urandom of=mnt/foo/12blocks.bin bs=1024 count=12 1>/dev/null 2>&1
	@dd if=/dev/urandom of=mnt/foo/13blocks.bin bs=1024 count=13 1>/dev/null 2>&1
	@cp 1mb.bin mnt/
	@md5sum mnt/1mb.bin
	#@linux/md5sum.linux mnt/1mb.bin
	@cp texttest.txt mnt/
#	@chmod 644 *.out
#	@cp malltest.out mnt/malltest.out
#	@cp md5sum.out mnt/md5sum.out
	@cp md5sum mnt/md5sum
#	@cp linux/md5sum.linux mnt/md5sum.linux
	@cp malltest mnt/malltest	
	@cp testfile.txt mnt/	
	@mkdir mnt/ansi/
	@cp files/*.ans mnt/ansi/
	@cp files/frogprince.data mnt/
	@ls --inode -ln mnt
	@sync
	@sudo umount mnt
