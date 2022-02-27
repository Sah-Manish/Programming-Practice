#! /bin/bash
# Eligible to vote
echo "Enter your age : "
read age
if [ $age -ge 18 ]
then 
	echo "You are eligible to vote."
else
	echo "you are not eligible to vote"
fi
