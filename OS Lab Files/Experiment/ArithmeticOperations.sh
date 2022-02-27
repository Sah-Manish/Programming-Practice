# Arithmetic Operations
echo "Enter two numbers"
read num1
read num2
sum=`expr $num1 + $num2`
difference=`expr $num1 - $num2`
product=`expr $num1 \* $num2`
division=`expr $num1 / $num2`
modulo=`expr $num1 % $num2`
echo "Sum of $num1 and $num2 is $sum."
echo "Difference of $num1 and $num2 is $difference."
echo "Product of $num1 and $num2 is $product."
echo "Division of $num1 and $num2 is $division."
echo "Modulo of $num1 and $num2 is $modulo."

