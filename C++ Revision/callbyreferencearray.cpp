#include<iostream>
using namespace std;
void traverse(int *arr){
    int size=sizeof(arr);
    for(int i=0;i<=size+1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void print(int *arr){
    int size=sizeof(arr);
    for(int i=0;i<=size+1;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<"\nsize of array "<<sizeof(arr)/sizeof(arr[0])<<endl;
    traverse(arr);
    print(arr);
    // cout<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<&arr[9]<<endl;
    // cout<<"Difference of address arr[0]-arr[-1] "<<&arr[0]-&arr[9]<<"\nSize of int "<<sizeof(arr[0])<<endl;
    return 0;
}