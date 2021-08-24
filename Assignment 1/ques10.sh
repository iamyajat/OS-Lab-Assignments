#! /bin/sh

if [ $# -eq 1 ]
then
	ls $1 |
	while read folder
	do
		if [ -d $1/$folder ]
		then
			cnt=`ls $1/$folder | wc -l`
			if [ $cnt -eq 0 ]
			then
				echo $folder >> empty_folders.txt
			fi
		fi
	done
else
	echo "Usage: $0 directory"
	echo "Eg: $0 /home/iamyajat/Desktop/OSLab"
fi
