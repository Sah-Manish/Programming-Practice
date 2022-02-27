#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;std::cin >> t;
    while(t--){
        int n,add=0,high=-1;
        std::cin >> n;
        map<int,int> counter;
        for(int i=0;i<n;i++){
            int m;
            std::cin >> m;
            counter[m]++;
        }
        for(auto x:counter){
            if(high<x.second)
                high=x.second;
            add+=x.second;
        }
        if(high==n) cout<<"0"<<endl;
        else if(high<= 1&& n>=2) cout<<"-1"<<endl;
        else cout<<(add-high+1)<<endl;
    }
    return 1;
}
/*
3
1
1
2
1 2
3
1 1 2
*/