#!/bin/sh
basedir="$(dirname "$(readlink -f "${0}")")"
cd "$basedir"
for f in $basedir/*.xpm; do convert $f $(echo $f|sed 's/.xpm/.png/');done
for f in $basedir/*.xpm; do convert $f $(echo $f|sed 's/.xpm/.bmp/');done
