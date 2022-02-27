#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--){
	    int num,rem=0,temp;
	    cin>>num;
	    temp=num;
	    while(temp>0){
	        rem=rem*10 + temp%10;
	        temp=temp/10;
	    }
	    cout<<rem<<endl;
	}
	
	return 0;
}
