#! /bin/bash
# Odd or Even
echo "Enter a Number : "
read num
res=`expr $num % 2`
if [ $res -eq 0 ]
then
	echo "$num is even number."
else
	echo "$num is odd number."
fi	
