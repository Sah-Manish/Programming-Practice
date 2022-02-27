#include<stdio.h>
// Queation 1
void isLeap(int num){
    if(num%4==0){
        printf("Leap Year.\n");
    }
    else{
        printf("Not a Leap Year\n");
    }
}
void LeapYear(int num){
    num%4==0 ? printf("Leap Year.\n") : printf("Not a Leap Year\n");
}
// Question 2
void isLower(char x){
    if(x<122 and x>97){
        printf("Lower character\n");
    }
    else{
        printf("Not a Lower Character\n");
    }
}
// Question 3
void Greatest(){
    int max,num;
    for(int i=0; i<4; i++){
        printf("Enter a element : ");
        scanf("%d",&num);
        if(i==0){
            max=num;
        }
        else{
            if(num>max){
                max=num;
            }
        }
    }
    printf("Greatest is %d ",max);
}
int main(){
    isLeap(2016);
    LeapYear(2016);
    isLower('b');
    isLower('A');
    Greatest();
    return 0;
}