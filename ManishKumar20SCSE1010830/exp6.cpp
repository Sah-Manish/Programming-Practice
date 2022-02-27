#include<stdio.h>
int main(){
    int num,i=1,j=1;
    printf("Pattern printing :");
    scanf("%d",&num);
    do{
        do{
            printf("* ");
            j++;
        }
        while(j<=i);
        printf("\n");
        i++;
        j=1;
    }
    while(i<=num);
    return  0;
}