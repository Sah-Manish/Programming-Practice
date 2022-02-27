#! /bin/bash
# Greatest among 3 numbers
echo "Enter 3 numbers : "
read a
read b
read c
if [ $a -ge $b ]
then
	if [ $b -ge $c ]
	then
		echo "$a is greatest"
	else
		echo "$c is greatest"
	fi
else
	if [ $b -ge $c ]
	then 
		if [ $c -ge $a ]
		then
			echo "$b is greatest"
		else
			echo "$a is greatest"
		fi
	else
		if [ $c -ge $a ]
		then
			if [ $a -ge $b ]
			then 
				echo "$c is greatest"
			else
				echo "$b is greatest"
			fi
		else
			if [ $c -ge $b ]
			then
				echo "$a is greatest"
			else
				echo "$b is greatest"
			fi
		fi
	fi
fi
