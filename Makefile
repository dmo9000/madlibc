CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar

## CC=/usr/local/gcc-68k/bin/m68k-elf-bdos-gcc
## AR=/usr/local/gcc-68k/bin/m68k-elf-bdos-ar
CFLAGS=-Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs -nostdinc -Os -ffunction-sections -fdata-sections -Iinclude -I/usr/local/madlibc/include

MADLIBC_OBJS=printf.o memset.o itoa.o strtoul.o memcpy.o strncmp.o 										\
			strerror.o puts.o putchar.o getchar.o strcmp.o strncpy.o memchr.o 							\
			random.o sbrk.o assert.o exit.o strlen.o strcpy.o strdup.o perror.o malloc.o		\
			fcntl_uspace.o fputs.o ustdio.o strlcat.o fflush.o fputc.o fprintf.o stat.o			\
			ctime.o ftime.o strrchr.o opendir.o opendir_r.o readdir.o closedir.o qsort.o		\
			vprintf.o fopen.o fclose.o fread.o endian.o strncat.o strcat.o time.o strchr.o	\
			strstr.o memcmp.o getopt.o fgetc.o fseek.o atoi.o memmove.o ftell.o ungetc.o		\
			toupper.o tolower.o strtol.o strndup.o islower.o fwrite.o ferror.o feof.o				\
			bsearch.o basename.o rindex.o atof.o strtod.o getc.o scanf.o vfscanf.o          \
			rand.o isprint.o ntohs.o htonl.o rewind.o strtok.o remove.o fgets.o strspn.o		\
			strpbrk.o fscanf.o getenv.o vfscanf.o vsscanf.o termios.o getcwd.o blkdev.o

# UTILITIES=src/ls/ls src/cat/cat src/ls/hexdump src/tstansi/tstansi src/cls/cls src/reset/reset src/cd/cd src/imgload/imgload src/time/time src/tictactoe/tictactoe src/sysutil/sysutil src/hangman/hangman src/cal/cal src/pong/pong src/wrtest/wrtest src/jzip/jzip src/malloctest/malloctest src/cursor/cursor src/fonttest/fonttest src/which/which src/touch/touch src/adventure/adventure
UTILITIES=$(shell cat utilities.mk)


all: libgrx.a src/libvt/libvt.a testfile.txt malltest libmadlibc.a md5sum utilities graphics 8mb 

libgrx.a:
	cd libgrx && make && make install

src/libvt/libvt.a:
	cd src/libvt && make 

graphics:
	cd src/grxtest && make 
	cd src/firedemo && make

utilities:
	for DIRNAME in `dirname $(UTILITIES)`; \
    do ( cd $$DIRNAME && make ) ; \
    done 


libmadlibc.a: $(MADLIBC_OBJS)
	$(AR) cru libmadlibc.a $(MADLIBC_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

malltest:	libmadlibc.a crt0.o malltest.o  
	/usr/local/gcc-68k/bin/m68k-elf-ld -T uspace.lds -o malltest --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  crt0.o malltest.o 	\
		 libmadlibc.a \
		/usr/local/gcc-68k/lib/gcc/m68k-elf/11.2.0/m68000/libgcc.a 

md5sum:    libmadlibc.a crt0.o md5sum.o  
	/usr/local/gcc-68k/bin/m68k-elf-ld -T uspace.lds -o md5sum --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  crt0.o libmadlibc.a md5sum.o    \
		  libmadlibc.a /usr/local/gcc-68k/lib/gcc/m68k-elf/11.2.0/m68000/libgcc.a


clean:
	rm -f shim *.out *.srec *.o malltest md5sum *.img hello?.txt
	for DIRNAME in `dirname $(UTILITIES)`; \
		do ( cd $$DIRNAME && make clean ) ; \
		done 

veryclean: clean
	rm -f testfile.txt
	
install: 8mb.img
	cp 8mb.img ~/git-local/68kp/8mb.img
	sudo mkdir -p /usr/local/madlibc/lib
	sudo mkdir -p /usr/local/madlibc/include
	sudo cp uspace.lds /usr/local/madlibc/uspace.lds
	sudo cp crt0.o /usr/local/madlibc/crt0.o
	sudo cp libmadlibc.a /usr/local/madlibc/lib/libmadlibc.a
	sudo cp libmadlibc.a /usr/local/madlibc/lib/libc.a
	sudo cp -rfp include/* /usr/local/madlibc/include
	#sudo cp -rfp include/* /usr/local/gcc-68k-bdos/m68k-elf-bdos/include 
	#sudo cp libmadlibc.a /usr/local/gcc-68k-bdos/m68k-elf-bdos/lib/libc.a
	#sudo cp libmadlibc.a /usr/local/gcc-68k-bdos/m68k-elf-bdos/lib/libmadlibc.a


install-headers:
	sudo mkdir -p /usr/local/madlibc
	sudo mkdir -p /usr/local/madlibc/lib
	sudo cp -rfpv include /usr/local/madlibc/include


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
	# not supporting large then 8MB 
	@dd if=/dev/zero of=8mb.img count=65536 bs=128
	# lower this number if you run out of inodes
	@mke2fs -i 8192 ./8mb.img
	@sudo mount 8mb.img mnt
	@sudo chown -R dan:dan mnt
	@mkdir mnt/bin
	for BASENAME in `echo $(UTILITIES)`; \
    do ( cp $$BASENAME mnt/bin/ ) ; \
    done 

	@mkdir mnt/testdata
	mkdir -p mnt/tdf/
	cp src/tdftool/*.TDF mnt/tdf/
	cp testdata/*.z3 mnt/testdata/
	cp src/fonttest/*.raw mnt/testdata/
	#cp src/adventure/raw/*.raw mnt/testdata/
	mkdir mnt/adventure
	#cp src/adventure/raw/*.raw.zx0 mnt/adventure/
	mkdir -p mnt/foo/bar/baz

	@printf "Hello world 1\r\n" > hello1.txt 2>&1
	@printf "Hello world 2\r\n" > hello2.txt 2>&1
	@cp hello1.txt mnt/testdata/hello1.txt
	@cp hello2.txt mnt/testdata/hello2.txt
	#@dd if=/dev/urandom of=mnt/testdata/12blocks.bin bs=1024 count=12 1>/dev/null 2>&1
	#@dd if=/dev/urandom of=mnt/testdata/13blocks.bin bs=1024 count=13 1>/dev/null 2>&1
	cp -rfpv bmf mnt
	cp 8x8/8x8.bmf mnt/bmf/
	@cp 1mb.bin mnt/testdata
	@cp texttest.txt mnt/testdata
	@cp md5sum mnt/bin/md5sum
	@cp malltest mnt/bin/malltest	
	@cp testfile.txt mnt/testdata/
	@mkdir mnt/ansi/
	#@cp files/*.ans mnt/ansi/
	#@cp files/frogprince.data mnt/testdata
	#@cp files/blackjack-640x384.data mnt/testdata/blackjack.data
	/usr/local/gcc-68k/bin/m68k-elf-strip mnt/bin/*
	@ls --inode -ln mnt
	@ls --inode -ln mnt/bin
	@sync
	df -h mnt
	@sudo umount mnt
