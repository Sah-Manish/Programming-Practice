#include<iostream>
using std::cout;

int BinarySearch(int ele,int* arr,int l, int r){
    if(r>=l){
        int mid=(l+ r-1 )/2;
        if(arr[mid]==ele){
            return mid;
        }
        else{
            if(arr[mid]>ele){
                return BinarySearch(ele,arr,l,mid-1);
            }
            else{
                return BinarySearch(ele,arr,mid+1,r);
            }
        }
    }
    return -1;
}
int* BubbleSort(int* arr, int length){
    while(length--){
        for(int i=0; i<length; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return arr;
}
int main(){
    int length=-1;
    int arr[]={1,3,5,67,78,99,128,256,345,347,456,567,678,789,999,1,3,5,67,78,99,128,256,345,347,456,567,678,789,999,1,3,5,67,78,99,128,256,345,347,456,567,678,789,999};
    for(int x:arr){length++;}
    BubbleSort(arr, length);
    int ans=0;
    ans=BinarySearch(128, arr, 0, length);
    cout<<ans<<"\n";
    for(int x:arr){cout<<x<<" ";}
    return 0;
}