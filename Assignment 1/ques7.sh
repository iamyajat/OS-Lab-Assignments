#! /bin/sh

if [ $# -eq 1 ]
then
	num=$1
	sum=0
	mod=0
	while [ $num -gt 0 ]
	do
		mod=`expr $num % 10`
		sum=`expr $sum + $mod`
		num=`expr $num / 10`
	done
	echo "The sum of digits of $1 is $sum"
else
	echo "Usage: $0 num"
	echo "Eg: $0 123"
fi
