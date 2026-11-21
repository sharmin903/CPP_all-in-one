#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        vector<int>a(N);
        for(int &x:a)cin>>x;
        if(K>=2||is_sorted(a.begin(),a.end())){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
        
    }
    return 0;
}