while read -r line; do
	echo "-> $line"
	./genfont.sh "$line"
	done < fontlist 
