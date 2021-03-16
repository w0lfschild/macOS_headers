#! /bin/bash

_productv=$(sw_vers -productVersion)
_buildv=$(sw_vers -buildVersion)
_path=$(dirname "$0")
cd "$_path"
cd ../
echo "$PWD"
git pull
git add .
git commit -m "macOS $_productv : BUILD $_buildv"
git push

# END
