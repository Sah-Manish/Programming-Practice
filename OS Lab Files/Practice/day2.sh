#! /bin/bash
: '
-a and && but require single bracket ; similarly -o or  ||
-ne not equal
-eq equal
-gt greater than
-lt less than
-ge greater than equal to ; similarly -le
if relational opr]erator is used
() is used

# Example of If Else

read count
if [ $count -eq 10 ]
then 
	echo "True Statement"
else
	echo "False Statement"
fi
'
# Example of if elif else
echo "Enter a number"
read num
if (($num > 0))
then
	echo "Positive Number"
elif (( $num <0 ))
then
	echo "Negative Number"
else
	echo "The number is Zero"
fi

# eligible to vote
echo "Enter your age"
read age
if [ $age -lt 150 ] && [ $age -ge 18 ] || [[ $age -lt 150 && $age -ge 18 ]]
then
	echo "Eligible to vote"
else
	echo "Not eligible to vote"
fi
