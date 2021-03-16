#! /bin/bash

_path=$(dirname "$0")
_base=$(dirname "$_path")
deprotect="$_path/deprotect"
classdump="$_path/class-dump"
dumpfile=""

if [[ "$1" ]]; then
	filename=$(basename "$1")
	extension="${filename##*.}"
	filename="${filename%.*}"

	echo "Dumping headers for : $1"
	# echo "$filename"
	# echo "$extension"

	dumpfile="$1"

	if [[ "$2" ]]; then
		"$classdump" -H "$dumpfile" -o "$2"
	else
		"$classdump" "$dumpfile"
	fi

	if [[ $? -eq 0 ]]; then
		echo "Successfully dumped unprotected file"
	else	
		if [[ "$extension" == "app" ]]; then
			target=${1%/}
			echo "Tyring to dump protected file $target..."
			("$deprotect" "$target"/Contents/MacOS/"$filename" /tmp/"$filename"_unprotected)
			if [[ -e /tmp/"$filename"_unprotected ]]; then
				dumpfile=/tmp/"$filename"_unprotected
			else
				dumpfile="$target"	
			fi	
			if [[ "$2" ]]; then
				("$classdump" -H "$dumpfile" -o "$2")
                # open -R "$2"
			else
				("$classdump" "$dumpfile")
			fi 
			if [[ $? -eq 0 ]]; then
				echo "Successfully dumped protected file"
			else
				echo "Failed to dump file"
			fi
			rm /tmp/"$filename"_unprotected
		fi
	fi
fi

# END
