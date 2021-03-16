# Class dump most important macOS applications and frameworks

_exec=$(dirname "$0")
_home=$(dirname "$_exec")
_dump="$_exec/header_dump.sh"
_pgit="$_exec/git_push.sh"

_bld=$(sw_vers -buildVersion)
_osx=$(sw_vers -productVersion)
_mjr=${_osx%.*}
_log="$_home"/logs/"$_bld"_updates.log

if [[ ! -e "$_log" ]]; then
	echo "New macOS version detected"
	echo "Dumping headers..."
	"$_dump"
	echo "Publishing..."
	"$_pgit"
else
	echo "Headers already up to date for $_bld"
fi

echo "Done"
