#! /bin/sh

if [ $# -eq 1 ]
then
	echo "Number of sub-directories: $(ls -R $1 | wc -l)"
else
	echo "Usage: $0 directory"
	echo "Eg: $0 /home/iamyajat/Desktop/OSLab"
fi
