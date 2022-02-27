#include<stdio.h>
int main(){
    int num, sum=0, res;
    printf("Enter a Number :");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        res=temp%10;
        sum+=res;
        temp/=10;
    }
    printf("Sum of all digits of number %d is %d.",num,sum);
    return  0;
}