#include<iostream>
using namespace std;
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
int main(){
    int num,ele;
    cout<<"Enter the length of list : ";
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cout<<"Enter element";
        cin>>arr[i];
    }
    cout<<"Array before sort :\n";
    for(int x:arr){cout<<x<<"->";}
    cout<<"end of array.\n";
    cout<<"Array after sort :\n";
    BubbleSort(arr,num);
    for(int x:arr){cout<<x<<"->";}
    cout<<"end of array.\n";
    cout<<"Enter element to search :";
    cin>>ele;
    int result=BinarySearch(ele,arr,0,num-1);
    result==-1 ? cout<<"Not Found" : cout<<"Found at position "<<result;
    return 0;
}