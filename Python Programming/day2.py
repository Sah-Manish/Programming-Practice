"""
# Factorial of number
num=int(input("Enter a number : "))
fact=1
for i in range(1,num+1):
    fact*=i
print("Factorial is ",num," is",fact)

# Fibonacchi Series
counter=int(input("Enter the number of fibinacchi element you want to print : "))
first=0
second=1
print(first)
while(counter>0):
    print(second)
    first,second=second,first+second
    counter-=1

# +ve -ve 0
num=int(input("Enter a number : "))
if(num>0):
    print("Positive Number")
elif(num<0):
    print("Negative Number")
else:
    print("The Number is Zero.")

# odd even
num=int(input("Enter a Number : "))
if(num & 1 == 1):
    print("Odd Number")
else:
    print("Even Number")

# Multiplication Table of the number
num=int(input("Enter a number : "))
for i in range(1,11):
    print(num," * ",i," = ", num*i)

# Celcius to Ferenheit
c=float(input("Enter Celcius : "))
f=(9/5)*c+32
print("Ferenheit of ",c," is ",f)

"""
# Maximum and 2nd maximum digit in integer
num=int(input("Enter a number : "))
temp=num
flag=0
while(temp>0):
    if(flag==0):
        max=temp%10
        flag=1
    else:
        if(max<=temp%10):
            max=temp%10
    temp=temp//10
max1=max
temp=num
flag=0
while(temp>0):
    x=temp%10
    temp=temp//10
    if(x==max1):
        continue
    else:
        if(flag==0):
            max=x
            flag=1
        else:
            if(max<x):
                max=x
    
print(max1," ",max)
