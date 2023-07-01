#!/bin/bash
for i in 1 2 3  4 5 6 7 8 9 10 11 12 13 14 15
do
	for j in 1 2 3  4 5 6 7 8 9 10 11 12 13 14 15
	do
	#value
		#result=$((i*j))
		#printf "%-4d" $result
		table=`expr $i \* $j`
		echo -e -n ""  $table "\t"
	done
	echo
done


#for i in 1 2 3
#do 
#fo j in 123


