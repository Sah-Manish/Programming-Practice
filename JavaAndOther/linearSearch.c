#include<stdio.h>
int LinearSearch(int arr[], int ele){
    int flag=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==ele){
            flag=1;
            break;
        }
    }
    flag==1 ? printf("Exists\n") : printf("Not in array\n");
}
int main(){
    int length=0;
    scanf("%d",&length);
    int arr[length]={0};
    for(int i=0;i<length;i++){
        scanf("%s",&arr[i]);
    }

    return 0;
}