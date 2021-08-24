#! /bin/sh

if [ $# -eq 3 ]
then
	case $2 in
		+) echo "$1 + $3 = `expr $1 + $3`";;
		-) echo "$1 - $3 = `expr $1 - $3`";;
		x) echo "$1 x $3 = `expr $1 \* $3`";;
		/) echo "$1 / $3 = `expr $1 / $3`";;
		*) echo "Invalid operator. Valid operators: +, -, x, /"
	esac
else
	echo "Usage: $0 num1 operator num2"
	echo "Valid operators: +, -, x, /"
	echo "Eg: $0 3 x 5"
fi
