CC=gcc
CC=/usr/local/gcc-68k/bin/m68k-elf-gcc
AR=/usr/local/gcc-68k/bin/m68k-elf-ar
CFLAGS=-D__68KBDOS__=1 -Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs -nostdinc -Os -ffunction-sections -fdata-sections -I../../include/ -I../libvt/ -I../../include/ -I../../libgrx
# LDFLAGS=-L/usr/X11R6/lib -L/usr/local/lib -lGL -lGLU -lglut -lm -pthread

TDFTOOL_OBJS=tdftool.o tdffont.o sauce.o
OBJS=gfx_opengl.o rawfont.o ansiload.o
ANSIREAD_OBJS=ansiread.o gfx_png.o 
LIBANSICANVAS_OBJS=ansiraster.o ansicanvas.o ansistate.o utf8.o bmf.o 
TESTSAMPLE=../THEDRAWFONTS/BLACKX.TDF
GITHASH=`git log --pretty=format:'%h' -n 1`
GITORIGIN=`git config --get remote.origin.url`
OSVERSION=`uname -srm`
DATE=`date +%Y-%m-%d`
COLUMNS=80
PADDING=`printf '%*s' 110`

all: libansicanvas.a tdftool 

libansicanvas.a: $(LIBANSICANVAS_OBJS)
	ar cru libansicanvas.a $(LIBANSICANVAS_OBJS)

tdftool: $(TDFTOOL_OBJS) libansicanvas.a
	#$(CC) -o tdftool $(TDFTOOL_OBJS) -L. -lansicanvas -lm
	/usr/local/gcc-68k/bin/m68k-elf-ld -T ../../uspace.lds -o tdftool --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  ../../crt0.o    \
    $(TDFTOOL_OBJS) libansicanvas.a ../../libmadlibc.a libansicanvas.a /usr/local/gcc-68k/lib/gcc/m68k-elf/8.2.0/m68000/libgcc.a

clean:
	rm -f tdftool rawfont ansiread *.o *.a *.core

veryclean: clean
	rm -rf tests/pass/*.ans
	rm -rf tests/fail/*.ans
	rm -rf tests/pass/utf8/*.ans

install:
	sudo cp tdftool /usr/bin/tdftool
	sudo cp *.a /usr/lib/

test: tdftool
	./test.sh
