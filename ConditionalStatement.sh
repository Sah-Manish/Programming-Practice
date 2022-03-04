#! /bin/bash
# Conditional Statement
echo "Enter Your Age"
read age
if [ $age -ge 18 ]
then
	echo "Eligible to vode"
	echo "Vote for the best"
else
	echo "Not eligible to vote"
fi
