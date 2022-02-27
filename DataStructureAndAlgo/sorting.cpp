#include<iostream>
using namespace std;
int sort(int *arr){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return *arr;
}
int main(){
    int arr[10]={5,8,3,7,6,4,8,2,1,6};
    //sorting algorithm
    sort(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}