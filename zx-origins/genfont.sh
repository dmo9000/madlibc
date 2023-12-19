#!/bin/sh

FONTNAME=${1}

if [ -z "${FONTNAME}" ]; then 
	echo "usage: genfont <font-name>"
	exit 1
	fi


mkdir -p cache/
rm -rf cache/"${1}"
if [ ! -r "cache/${1}.zip" ]; then
	wget https://download.damieng.com/fonts/zx-origins/"${1}".zip -O ./cache/"${1}".zip
	else
	echo "cache/${1}.zip already exists and is readable"
	fi
mkdir -p ./cache/"${1}"
cp cache/"${1}".zip cache/"${1}"/"${1}".zip
# unpack and prepare in subshell
  ( cd ./cache/"${1}" && unzip -qq "${1}".zip )
  ( cd ./cache/"${1}" && find -type d -not -name "Source" -exec rm -rf {} \; 2>/dev/null )
  ( cd ./cache/"${1}" && find -maxdepth 1 -mindepth 1 -type f -not -name "Source" -exec rm -f {} \; 2>/dev/null )
  ( cd ./cache/"${1}" && find -maxdepth 1 -mindepth 2 -type f -not -name "*.h" -exec rm -f {} \; 2>/dev/null )
  ( cd ./cache/"${1}" && mv Source/*.h . && rm -rf ./Source ) 
# back at toplevel
cd ./cache/"${1}" 
for f in *\ *; do mv "$f" "${f// /_}" 2>/dev/null; done
HEADERS=`find * -type f -name "*.h" | awk '/ /{ printf"\"%s\"\n", $0; next } { print }'`
for HEADER in ${HEADERS} ; do
	echo " + processing ${HEADER} ..."
	dos2unix ${HEADER} 2>/dev/null
	FONT_NAME=`grep "^static const uint8_t" ${HEADER} | awk '{ print $4; }' | tr -d "[]"`
	BMF_NAME=`echo ${HEADER} | sed -e "s/\.h$/\.bmf/"`
	#grep "," ${HEADER}  | sed -e "s/\/\/.*$//" | tr -d "," | sed -e "s/0x//g" | sed -e "s/^\s*//" 
	echo "42 4d 46 00 08 08 00 01" > ${BMF_NAME}.data
	for BLANK in `seq 0 31`; do
		echo "00 00 00 00 00 00 00 00" >> ${BMF_NAME}.data
		done
	grep "," ${HEADER}  | sed -e "s/\/\/.*$//" | tr -d "," | sed -e "s/0x//g" | sed -e "s/^\s*//" >> ${BMF_NAME}.data 
	for BLANK in `seq 128 255`; do
		echo "00 00 00 00 00 00 00 00" >> ${BMF_NAME}.data
		done
	xxd -r -p ${BMF_NAME}.data > ${BMF_NAME}
	CATALOG1=${BMF_NAME:0:1}
	CATALOG2=`echo ${BMF_NAME} | sed -e "s/\.bmf$//" | cut -d "_" -f 1`
	mkdir -p ../../../bmf/${CATALOG1}/${CATALOG2}
	cp ${BMF_NAME} ../../../bmf/${CATALOG1}/${CATALOG2}/
	ls -l ../../../bmf/${CATALOG1}/${CATALOG2}/${BMF_NAME}
	done


