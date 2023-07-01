#! bin/sh
file=`ls`
for i in $file
do
	echo -n "$i"
	grep $i$i
	
done
