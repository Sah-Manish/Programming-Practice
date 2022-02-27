#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    num>0 ? printf("Positive number") : num<0 ? printf("Negative number") : printf("Number is 0");
    return 0;
}