#include<stdio.h>
int main(){
    int l,b,val,sumofdiagonal=0,sumofnondiagonal=0;
    printf("Enter length and width of matrix :");
    scanf("%d %d",&l,&b);
    int arr[l][b];
    // Taking user input
    printf("Enter Elements in array\n");
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            printf("Enter element at Array[%d][%d]: ",i,j);
            scanf("%d",&val);
            arr[i][j]=val;
        }
    }
    // printing array
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n\n");
    }
    // finging sum
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            if(i==j){
                sumofdiagonal+=arr[i][j];
            }
            else{
                sumofnondiagonal+=arr[i][j];
            }
        }
    }
    printf("Sum of diagonal elements is : %d\n",sumofdiagonal);
    printf("Sum of non diagonal elements is : %d",sumofnondiagonal);
    return 0;
}