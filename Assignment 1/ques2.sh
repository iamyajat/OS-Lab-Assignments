#! /bin/sh

if [ $# -eq 2 ]
then
	echo "$1 + $2 = `expr $1 + $2`"
else
	echo "Usage: $0 num1 num2"
	echo "Eg: $0 2 3"
fi
