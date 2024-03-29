# $Id: dumbio.mak,v 1.1.1.1 2000/05/10 14:20:51 jholder Exp $
# UNIX C makefile for the JZIP Infocom interpreter
#
# If you have:            |  CC=  |  CFLAGS =       |  LIBS =     |
#-------------------------+-------+-----------------+-------------+
#    Linux                |  gcc  |  -c -DPOSIX     |  -ltermcap  | 
#                         |       |  -DHAVE_GETOPT  |             |
#    FreeBSD              |  cc   |  -c -DPOSIX     |  -ltermcap  | 
#                         |       |  -DHAVE_GETOPT  |             |
#    RS6000 / AIX         |  xlc  |  -c -DAIX       |  -ltermcap  |
#    SGI / Irix 4.x       |  cc   |  -c -DPOSIX     |  -lcurses   |
#    SGI / Irix 5.x       |  cc   |  -c -DPOSIX     |  -lcurses   |
#                         |       |  -DHAVE_GETOPT  |             |
#                         |       |  -mips2 -32     |             |
#                         |       |  -O             |             |
#    SGI / Irix 6.x       |  cc   |  -c -DPOSIX     |  -lcurses   |
#                         |       |  -DHAVE_GETOPT  |             |
#                         |       |  -mips3 -n32    |             |
#                         |       |  -O             |             |
#                         |       |  -OPT:Olimit=2500 |           |
#    SPARC / SunOS        |  cc   |  -c -DPOSIX     |  -ltermcap  |
#    SPARC /Solaris       |  gcc  |  -c -DPOSIX     |  -ltermcap  |
#                         |       |  -DNO_BCOPY     |             |
#                         |       |  -DHAVE_GETOPT  |             |
#    NeXT / Mach          |  cc   |  -c -DBSD       |  -ltermcap  |    
#    Alpha / OSF/1        |  cc   |  -c -DPOSIX     |  -lcurses   |
#    HP9000 / HP-UX       |  gcc  |  -c -DPOSIX     |  -ltermcap  |
#    HP9000 / HP-UX >10.x |  cc   |  -c -DPOSIX     |  -ltermcap  |
#    DEC / Ultrix         |  cc   |  -c -DPOSIX     |  -lcurses   | (not tested)
#
# To try and use ANSI color escape sequences, try adding
# -DHARD_COLORS
# to the CFLAGS line.
#
# To disable Quetzal and use the old Jzip save format, 
# edit ztypes.h and comment out:                      #define USE_QUETZAL
#
# To disable strict zcode checking so the interpreter
# _cannot_ be strict, edit ztypes.h and comment out:  #define STRICTZ
#
# To enable use of Zlib (gzip compressed games files) add:
# To CFLAGS: -DUSE_ZLIB
# To LIBS: -lz

CC = /usr/local/gcc-68k/bin/m68k-elf-gcc

# If your compiler doesn't like this, put -O or nothing.
#OPTIMIZE = -O2 
#OPTIMIZE = 
#OPTIMIZE = -pg -ansi -pedantic

CFLAGS = $(OPTIMIZE) -DPOSIX -DHAVE_GETOPT -DHARD_COLORS -Wall -Wno-switch-bool -Wno-unused-value -Wno-unused-but-set-variable -m68000 -nostdlib -nodefaultlibs -nostdinc -Os -ffunction-sections -fdata-sections -I../../include/ -I../libvt/ -I../../include/ -I../../libgrx

#LIBS = -lcurses
#LIBS = -ltermcap
LIBS=

# -------------------------------------------------------------------
# YOU SHOULD NOT NEED TO MODIFY BELOW HERE
# -------------------------------------------------------------------

INC = ztypes.h jzip.h

OBJS = jzip.o control.o extern.o fileio.o input.o interpre.o license.o \
	math.o memory.o object.o operand.o osdepend.o property.o quetzal.o \
	screen.o text.o variable.o dumbio.o

all  : jzip #jzexe ckifzs

jzip : $(OBJS) ztypes.h jzip.h ../../crt0.o ../libvt/libvt.a ../../libmadlibc.a ../libvt/libvt.a ../../libgrx/libgrx.a
	#$(CC) -o $@ $(CFLAGS) $(OBJS) $(LIBS)
	/usr/local/gcc-68k/bin/m68k-elf-ld -T ../../uspace.lds -o jzip --gc-sections --defsym=_start=_start -Ttext=0x100100 -e _start  ../../crt0.o    \
    $(OBJS) ../libvt/libvt.a ../../libmadlibc.a ../../libgrx/libgrx.a ../libvt/libvt.a /usr/local/gcc-68k/lib/gcc/m68k-elf/11.2.0/m68000/libgcc.a 

jzexe : jzexe.o jzexe.h
	$(CC) -o $@ $(CFLAGS) jzexe.o

ckifzs : ckifzs.o
	$(CC) -o $@ $(CFLAGS) ckifzs.o


clean :
	-rm -f *.o

realclean :
	-rm -f *.o jzip jzexe ckifzs

DATE = `date +%m%d%Y`
FULLDATE = `date '+%a, %b %d %Y'`
stamp:
	-echo "#define JZIPVER \"Jzip V2.1\"" > ./jzip.h
	-echo "#define JZIPRELDATE \"$(FULLDATE)\"" >> ./jzip.h
archive:
	-tar cvf jzip21-$(DATE).tar *.[c,h] *.txt *.1 *.mak Makefile > /dev/null 2>&1
	-gzip --force jzip21-$(DATE).tar
