# Swapping two numbers with 3rd variable
echo "Enter 1st number"
read num1
echo "Enter 2nd number"
read num2
echo "Numbers before swapping"
echo "1st number : $num1"
echo "2nd number : $num2"
temp=$num1
num1=$num2
num2=$temp
echo "Numbers after swapping"
echo "1st number : $num1"
echo "2nd number : $num2"
# Swapping two numbers without 3rd variable
echo "Numbers before swapping"
echo "1st number : $num1"
echo "2nd number : $num2"
num1=`expr $num1 + $num2`
num2=`expr $num1 - $num2`
num1=`expr $num1 - $num2`
echo "Numbers after swapping"
echo "1st number : $num1"
echo "2nd number : $num2"

