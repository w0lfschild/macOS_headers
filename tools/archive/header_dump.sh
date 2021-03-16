# Class dump most important macOS applications and frameworks

_exec=$(dirname "$0")
_home=$(dirname "$_exec")

function plistbuddy () {
	/usr/libexec/PlistBuddy -c "$@"
}

function class_dump() {

    _bld=$(sw_vers -buildVersion)
	_osx=$(sw_vers -productVersion)
	_mjr=${_osx%.*}
    _log="$_home"/logs/"$_bld"_updates.log

	for entry in "$1"/*
	do
		_file="$entry"
		_path=${_file%/*}
		_fldr=${_path##*/}
		_base=${_file##*/}
		_fext=${_base##*.}
		_pref=${_base%.*}

		if [[ "$_fext" == "app" ]] || [[ "$_fext" == "framework" ]]; then

			_info="$_file"/Contents/Info.plist
			if [[ "$_fext" == "framework" ]]; then _info="$_file"/Resources/Info.plist; fi

			# _shrt=$(plistbuddy "Print CFBundleShortVersionString" "$_info")
			_vers=$(plistbuddy "Print CFBundleVersion" "$_info" 2>/dev/null)
			if [[ $_vers == *"File Doesn't Exist"* ]]; then
				_info2="$_file"/Resources/Info.plist
				_vers=$(plistbuddy "Print CFBundleVersion" "$_info2" 2>/dev/null)
			fi

			if [[ $_vers != *"File"* ]]; then
				_resl="$?"
				if [[ "$_resl" != 0 ]]; then 
					echo "$_resl : $_vers"
					echo "$_file"
					echo
				fi

				dump_path="$_home"/macOS/"$_fldr"/"$_pref"/"$_vers"
	            # dump_item "$_file" "$dump_path"
			
	            if [ ! -e "$dump_path" ]; then
	            	echo "$dump_path"
	                echo "$_pref" : "$_vers"
	                mkdir -p "$dump_path"
	                "$_exec/dump.sh" "$_file" "$dump_path"
	                echo
	                # changelog
	                echo "$_fldr/$_pref : $_vers" >> "$_log"
	            fi
        	fi

			# echo "path: $_file"
			# echo "base: $_fldr"
			# echo "name: $_pref"
			# echo "exte: $_fext"
			# echo ""

		fi

	done

}

# macOS
class_dump "/Applications"
class_dump "/Applications/Utilities"
class_dump "/System/Library/Frameworks"
class_dump "/System/Library/PrivateFrameworks"
class_dump "/System/Library/CoreServices"
class_dump "/System/Library/CoreServices/Applications"

# iOS shared
class_dump "/System/iOSSupport/System/Library/Frameworks"
class_dump "/System/iOSSupport/System/Library/PrivateFrameworks"

echo
