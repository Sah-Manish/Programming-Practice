#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num,k;
        cin>>num>>k;
        int arr[num],left[num/2],right[num/2];
        for(int i=1;i<=num;i++){
            arr[i-1]=i;
        }
        while(k>0){
            int leftcounter=0,rightcounter=0;
            for(int i=0;i<num;i++){
                i%2==0 ? left[leftcounter]=arr[i],leftcounter++ : right[rightcounter]=arr[i],rightcounter++ ;
            }
            for(int i=0;i<num;i++){
                if(i<num/2){
                    arr[i]=left[i];
                }
                else{
                    arr[i]=right[i - num/2];
                }
            }
            k--;
            //printing array
            for(int i=0;i<num;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}