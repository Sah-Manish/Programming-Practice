#include<stdio.h>
int main(){
    int num, rev=0, res;
    printf("Enter a Number :");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        res=temp%10;
        rev=rev*10+res;
        temp/=10;
    }
    printf("Reverse of the number %d is %d.",num,rev);
    return  0;
}