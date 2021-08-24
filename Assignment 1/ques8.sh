#! /bin/sh

if [ $# -eq 1 ]
then
	if [ -f $1 ]
	then
		echo "$1 exists"
	else
		echo "$1 doesn't exist"
	fi
else
	echo "Usage: $0 filename"
	echo "Eg: $0 script.sh"
fi
