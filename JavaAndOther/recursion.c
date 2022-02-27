#include<stdio.h>

int factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int* pointerCode(){
    static int a=7;
    return (&a);
}
signed main(){
    // int t; scanf("%d",&t);
    // while(t--){
    //     int num;
    //     scanf("%d",&num);
    //     printf("%d\n",factorial(num));
    // }
    int* p = pointerCode();
    printf("Address is : %p\n",p);
    printf("Value at above address is: %d\n",*p);
    return 0;
}