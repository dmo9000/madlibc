CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar

## CC=/usr/local/gcc-68k/bin/m68k-elf-bdos-gcc
## AR=/usr/local/gcc-68k/bin/m68k-elf-bdos-ar
CFLAGS=-Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs -nostdinc -Os -ffunction-sections -fdata-sections -Iinclude -I/usr/local/madlibc/include

MADLIBC_OBJS=printf.o memset.o itoa.o strtoul.o memcpy.o strncmp.o 						\
			strerror.o puts.o putchar.o getchar.o strcmp.o strncpy.o memchr.o 		\
			random.o sbrk.o assert.o exit.o strlen.o strcpy.o strdup.o perror.o malloc.o		\
			fcntl_uspace.o fputs.o ustdio.o strlcat.o fflush.o fputc.o fprintf.o stat.o			\
			ctime.o ftime.o strrchr.o opendir.o opendir_r.o readdir.o closedir.o qsort.o		\
			vprintf.o fopen.o fclose.o fread.o endian.o strncat.o strcat.o time.o strchr.o	\
			strstr.o memcmp.o getopt.o fgetc.o fseek.o atoi.o memmove.o ftell.o ungetc.o		\
			toupper.o tolower.o strtol.o strndup.o islower.o fwrite.o ferror.o feof.o				\
			bsearch.o basename.o rindex.o atof.o strtod.o getc.o scanf.o vfscanf.o          \
			rand.o isprint.o ntohs.o htonl.o 

UTILITIES=src/ls/ls src/cat/cat src/ls/hexdump src/tstansi/tstansi src/cls/cls src/cd/cd src/imgload/imgload src/time/time src/tictactoe/tictactoe src/sysutil/sysutil src/hangman/hangman src/cal/cal src/pong/pong


all: libgrx.a src/libvt/libvt.a testfile.txt malltest libmadlibc.a md5sum utilities graphics 8mb 

libgrx.a:
	cd libgrx && make && make install

src/libvt/libvt.a:
	cd src/libvt && make 

graphics:
	cd src/grxtest && make 
	cd src/firedemo && make

utilities:
	cd src/ls && make
	cd src/cat && make
	cd src/hexdump && make
	cd src/tstansi && make
	cd src/imgload && make
	cd src/cls && make
	cd src/cd && make
	cd src/time && make
	cd src/bogomips && make
	cd src/tictactoe && make
	cd src/test_stdin && make
	cd src/test_std && make
	cd src/sysutil && make
	cd src/hangman && make
	cd src/cal && make
	cd src/pong && make


libmadlibc.a: $(MADLIBC_OBJS)
	$(AR) cru libmadlibc.a $(MADLIBC_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

malltest:	libmadlibc.a crt0.o malltest.o  
	/usr/local/gcc-68k/bin/m68k-elf-ld -T uspace.lds -o malltest --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  crt0.o malltest.o 	\
		 libmadlibc.a \
		/usr/local/gcc-68k/lib/gcc/m68k-elf/8.2.0/m68000/libgcc.a 

md5sum:    libmadlibc.a crt0.o md5sum.o  
# fopen.o fread.o fclose.o  
	/usr/local/gcc-68k/bin/m68k-elf-ld -T uspace.lds -o md5sum --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  crt0.o libmadlibc.a md5sum.o    \
		  libmadlibc.a /usr/local/gcc-68k/lib/gcc/m68k-elf/8.2.0/m68000/libgcc.a


clean:
	rm -f shim *.out *.srec *.o malltest md5sum *.img hello?.txt
	cd src/ls && make clean
	cd src/hexdump && make clean
	cd src/tstansi && make clean
	cd src/imgload && make clean
	cd src/grxtest && make clean
	cd src/firedemo && make clean
	cd src/cls && make clean
	cd src/cd && make clean
	cd src/time && make clean
	cd src/bogomips && make clean
	cd src/tictactoe && make clean
	cd src/test_stdin && make clean
	cd src/test_std && make clean
	cd libgrx && make clean
	cd src/libvt && make clean

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
	sudo cp -rfp include/* /usr/local/gcc-68k-bdos/m68k-elf-bdos/include 
	sudo cp libmadlibc.a /usr/local/gcc-68k-bdos/m68k-elf-bdos/lib/libc.a
	sudo cp libmadlibc.a /usr/local/gcc-68k-bdos/m68k-elf-bdos/lib/libmadlibc.a



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
	@mkdir mnt/bin
	@mkdir mnt/testdata
	@cp src/ls/ls mnt/bin/ls
	# don't use symlink! causes crashes right now
	# cd mnt/bin/ && ln -sf ls dir & cd ../..
	@cp src/cat/cat mnt/bin/cat
	@cp src/hexdump/hexdump mnt/bin/hexdump
	@cp src/tstansi/tstansi mnt/bin/tstansi
	@cp src/imgload/imgload mnt/bin/imgload
	@cp src/grxtest/grxtest mnt/bin/grxtest
	@cp src/firedemo/firedemo mnt/bin/firedemo
	@cp src/cls/cls mnt/bin/cls
	@cp src/cd/cd mnt/bin/cd
	@cp src/time/time mnt/bin/time
	@cp src/bogomips/bogomips mnt/bin/bogomips
	@cp src/tictactoe/tictactoe mnt/bin/tictactoe
	@cp src/test_stdin/test_stdin mnt/bin/test_stdin
	@cp src/test_std/test_std mnt/bin/test_std
	cp src/sysutil/sysutil mnt/bin/sysutil
	cp src/hangman/hangman mnt/bin/hangman
	cp src/cal/cal mnt/bin/cal
	cp src/tdftool/tdftool mnt/bin/tdftool
	mkdir -p mnt/tdf/
	cp src/tdftool/*.TDF mnt/tdf/
	cp src/pong/pong mnt/bin/pong
	@cp extra/dfrotz mnt/bin/dfrotz
	@printf "Hello world 1\r\n" > hello1.txt 2>&1
	@printf "Hello world 2\r\n" > hello2.txt 2>&1
	@cp hello1.txt mnt/testdata/hello1.txt
	@cp hello2.txt mnt/testdata/hello2.txt
	@dd if=/dev/urandom of=mnt/testdata/12blocks.bin bs=1024 count=12 1>/dev/null 2>&1
	@dd if=/dev/urandom of=mnt/testdata/13blocks.bin bs=1024 count=13 1>/dev/null 2>&1
	@cp 1mb.bin mnt/testdata
	@cp texttest.txt mnt/testdata
	@cp md5sum mnt/bin/md5sum
	@cp malltest mnt/bin/malltest	
	@cp testfile.txt mnt/testdata/
	@mkdir mnt/ansi/
	@cp files/*.ans mnt/ansi/
	@cp files/frogprince.data mnt/testdata
	@cp files/blackjack-640x384.data mnt/testdata/blackjack.data
	/usr/local/gcc-68k/bin/m68k-elf-strip mnt/bin/*
	@ls --inode -ln mnt
	@ls --inode -ln mnt/bin
	@sync
	@sudo umount mnt
