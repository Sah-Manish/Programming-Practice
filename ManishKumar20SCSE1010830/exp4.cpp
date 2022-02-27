#include<stdio.h>
int main(){
    int num, sum=0;
    printf("Enter a Number to print sum of odd numbers till n :");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("Sum of all Odd Numbers till %d is %d.",num,sum);
    return  0;
}