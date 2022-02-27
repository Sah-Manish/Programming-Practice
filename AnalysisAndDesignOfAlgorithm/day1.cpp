#include<iostream>
using namespace std;
int main(){
    int max,num;
    cout<<"Enter 10 numbers\n"<<endl;
    for(int i=1;i<11;i++){
        cout<<"Enter number "<<i<<" : ";
        cin>>num;
        if(i==1){
            max=num;
        }
        else{
            if(max<num){
                max=num;
            }
        }
    }
    cout<<"Greatest among all numbers is "<<max<<".";
    return 0;
}