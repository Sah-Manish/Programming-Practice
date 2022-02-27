//#include<stdio.h>
#include<iostream.h>
#include<math.h>
# define p 11
# define q 3
using namespace std;
int calculateGCD(int x, int y){
    if(y!=0){
        calculateGCD(y,x%y);
    }
    else{
        return x;
    }
    return 0;
}
int calculateE(int phiN){
    int e=0;
    for(int i=3;i<phiN;i++){
        if(calculateGCD(i,phiN)==1){
            e=i;
            return e;
        }
    }
    return e;
}
int main(){
    int e,msg;
    int n=p*q;
    int phin=(p-1)*(q-1);
    e=calculateE(phin);
    int k = 2; 
	int d = (1 + (k*phin))/e;
    // d->13 and e->3;
    //printf("d=%d\ne=%d\n",d,e);
    cout<<"Enter Encrypted code :";
    cin>>msg;
    cout<<"Enter public key of sender (Manish Kumar) :";
    cin>>d;
    int plainText=fmod(pow(msg,d),n);
    int cypherText=fmod(pow(msg,e),n);
    //printf("plain text: %d Cypher text: %d\n",plainText,cypherText);
    if(plainText==cypherText){
        cout<<"Digital Signature of Manish Kumar is verified.";
    }
    else{
        cout<<"Digital Signature of Manish Kumar is rejected.";
    }
    return 0;
}