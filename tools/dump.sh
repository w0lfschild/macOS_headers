#! /bin/bash

_path=$(dirname "$0")
_base=$(dirname "$_path")
deprotect="$_path/deprotect"
classdump="$_path/class-dump"
swiftdump="$_path/class-dump-swift"
dumpfile=""
_isProtected=""

# echo $_res

if [[ "$1" ]]; then
	filename=$(basename "$1")
	extension="${filename##*.}"
	filename="${filename%.*}"

	echo "Dumping headers for : $1"
	# echo "$filename"
	# echo "$extension"

	# Try to dump the file
	dumpfile="$1"
	if [[ "$2" ]]; then
		# Dump to folder
		_result=$(("$classdump" -H "$dumpfile" -o "$2") 2>&1)

		# File does not contain objective-c
		if [[ $_result =~ "Objective-C" ]]; then
			classdump="$swiftdump"
			_isProtected=$(("$classdump" -H "$dumpfile" -o "$2") 2>&1)
		fi
	else
		# Dump to console
		_result=$(("$classdump" "$dumpfile") 2>&1)

		# File does not contain objective-c
		if [[ $_result =~ "Objective-C" ]]; then
			classdump="$swiftdump"
			_isProtected=$(("$classdump" "$dumpfile") 2>&1)
		fi
	fi

	# Error status for testing
	# echo $?

	# Check if dumping succeded, if not try to deprotect and dump the file
	if [[ $_isProtected =~ "decryptedData" ]]; then
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
	else
		echo "Successfully dumped unprotected file"
	fi
fi

# END
