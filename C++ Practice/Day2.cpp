#include<iostream>
using namespace std;
int factorial(int);
int main(){
    for(int i=0;i<50;i++){
        cout<<i<<"\t=\t"<<factorial(i)<<endl;
    }
    return 0;
}

int factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return factorial(num-1)*num;
    }
}