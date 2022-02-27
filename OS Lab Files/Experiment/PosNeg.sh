#! /bin/bash
# Positive or Negative
echo "Enter a Number : "
read num
if [ $num -gt 0 ]
then
	echo "$num is positive number."
else
	echo "$num is negative number."
fi
