#!/bin/sh
# this is the first example











#echo welcome to unix shell programing
#echo the day of today `date`
#echo the current directory is `pwd`
files=`ls`
#echo $files
value=`expr 12345 + 54321`
#echo $value
count=5
count=`expr $count + 1`
count=`expr $count / 2`
#echo $count

echo "who am i talking to? "
read user_name
echo 'Hello $user_name'
