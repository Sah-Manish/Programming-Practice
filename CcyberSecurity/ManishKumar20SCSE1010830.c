// Final Draft
#include<stdio.h>
#include<math.h>
#define p 11
#define q 3
#define encryption 7
long long int power(int base,int expo,int pq){
    long long int res;
    for(int i=1;i<=expo;i++){
        res=fmod(res*base,pq);
    }
    return res;
}
int main(){
    int n,decryption,eulerToitent;
    int CypherTextSign;
    n=p*q; //33
    eulerToitent=(p-1)*(q-1);  //20
    int publicKey[]={encryption,n};
    printf("Enter Signature Text (Only Integers):\t");
    scanf("%d",&CypherTextSign);
    //printf("%s",CypherTextSign);
    // d=3 public key of Manish Kumar
    printf("Enter Public key of Manish Kumar for Digital Signature Verification:\t");
    scanf("%d",&decryption);
    int privateKey[2]={decryption,n};
    //printf("%d",decryption);
    long long int x=power(CypherTextSign,decryption,n);
    long long int M=fmod(x,n);  // Decrypted Signature or Plain Text
    long long int y=power(M,encryption,n);
    long long int C=fmod(y,n);  // Encrypted Text
    printf("M(Plain Text):%lld C(Cypher Text):%lld ",M,C);
    return 0;
}