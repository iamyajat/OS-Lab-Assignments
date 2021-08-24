#! /bin/sh

if [ $# -eq 1 ]
then
	num=$1
	rev=0
	mod=0
	while [ $num -gt 0 ]
	do
		mod=`expr $num % 10`
		rev=`expr $rev \* 10 + $mod`
		num=`expr $num / 10`
	done
	echo "The reverse of $1 is $rev"
else
	echo "Usage: $0 num"
	echo "Eg: $0 123"
fi
