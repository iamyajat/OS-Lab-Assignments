#! /bin/sh

if [ $# -eq 1 ]
then
	uniq $1 no_dupli.txt
	echo "Duplicate lines have been removed and stored in no_dupli.txt"
else
	echo "Usage: $0 filename"
	echo "Eg: $0 notes.txt"
fi
