#! /bin/sh

if [ $# -eq 3 ]
then
	if [ $1 -gt $2 ] && [ $1 -gt $3 ]
	then
		echo "$1 is the greatest"
	elif [ $2 -gt $1 ] && [ $2 -gt $3 ]
	then
		echo "$2 is the greatest"
	elif [ $3 -gt $1 ] && [ $3 -gt $1 ]
	then
		echo "$3 is the greatest"
	elif [ $2 -eq $1 ] && [ $2 -eq $3 ]
	then
		echo "All numbers are equal"
	else
		echo "Something went wrong"
	fi
else
	echo "Usage: $0 num1 num2 num3"
	echo "Eg: $0 45 23 98"
fi
