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

	# for entry in "$1"/*
	# do
		_file="$1"
		_path=${_file%/*}
		_fldr=${_path##*/}
		_base=${_file##*/}
		_fext=${_base##*.}
		_pref=${_base%.*}

		# Check for the best Version info...
		if [[ "$_fext" == "app" ]] || [[ "$_fext" == "framework" ]]; then

			# Handle app location
			if [[ "$_fext" == "app" ]]; then 

				# Check for CFBundleVersion in info.plist
				_info="$_file"/Contents/Info.plist
				if [[ -f "$_info" ]]; then
						_vers=$(plistbuddy "Print CFBundleVersion" "$_info" 2>/dev/null)

						# Check for CFBundleShortVersionString in info.plist if CFBundleVersion was not very useful
						if [[ $_vers == 1.0 || $_vers == "" ]]; then
							_vers=$(plistbuddy "Print CFBundleShortVersionString" "$_info" 2>/dev/null)
						fi
				fi
			fi
			

			# Handle framework location
			if [[ "$_fext" == "framework" ]]; then 

				# Check for BuildVersion in version.plist
				_info="$_file"/Resources/version.plist
				if [[ -f "$_info" ]]; then
					_vers=$(plistbuddy "Print BuildVersion" "$_info" 2>/dev/null)

					# Save the exit code, which indicates success v. failure
					exitCode=$? 

					echo $_vers
					echo $exitCode

					# Try to handle no build version found
					if [[ $exitCode != 0 ]]; then
						_info="$_file"/Resources/version.plist
						_vers=$(plistbuddy "Print CFBundleShortVersionString" "$_info" 2>/dev/null)

						if [[ $_vers == 1.0 || $_vers == "" ]]; then
							# handle not using info.plist for actual versioning
							_vers=$(plistbuddy "Print CFBundleVersion" "$_info" 2>/dev/null)
						fi
					fi
				fi
			fi

			# If the file exists
			if [[ -f "$_info" ]]; then

				# Test
				# echo $_fext : $_vers : $_info
				
				if [[ $_vers != *"File"* ]]; then
					_resl="$?"
					if [[ "$_resl" != 0 ]]; then 
						echo "$_resl : $_vers"
						echo "$_file"
						echo
					fi

					# Put iOSSupport in it's own folder
					dump_path="$_home"/macOS/"$_fldr"/"$_pref"/"$_vers"
					if [[ $_info =~ "iOSSupport" ]]; then
					   dump_path="$_home"/macOS/iOSSupport/"$_fldr"/"$_pref"/"$_vers"
					fi
				
					# Dump it!
		            # if [ ! -e "$dump_path" ]; then
		            	echo "$dump_path"
		                echo "$_pref" : "$_vers"
		                
		                # Make folder to dump to
		                # mkdir -p "$dump_path"

		                # Dump file
		                # "$_exec/dump.sh" "$_file" "$dump_path"
		                
		                # Hello
		                echo
		                
		                # update changelog
		                echo "$_fldr/$_pref : $_vers" >> "$_log"
		            # fi
	        	fi

			fi
			# echo "path: $_file"
			# echo "base: $_fldr"
			# echo "name: $_pref"
			# echo "exte: $_fext"
			# echo ""

		fi

	# done

}

# # macOS
# class_dump "/Applications"
# class_dump "/Applications/Utilities"
# class_dump "/System/Library/Frameworks"
# class_dump "/System/Library/PrivateFrameworks"
# class_dump "/System/Library/CoreServices"
# class_dump "/System/Library/CoreServices/Applications"

# # iOS shared
# class_dump "/System/iOSSupport/System/Library/Frameworks"
# class_dump "/System/iOSSupport/System/Library/PrivateFrameworks"

class_dump "$1"

echo
