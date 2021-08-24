#! /bin/sh

counter=5
while [ $counter -gt 0 ]
do
	echo "$counter"
	counter=`expr $counter - 1`
done
