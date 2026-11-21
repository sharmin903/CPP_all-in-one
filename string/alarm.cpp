#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        string S;
        cin>>N>>K>>S;
        int alarm= 0;
        int i=0;
        while(i<N){
            if(S[i]=='1'){
                alarm++;
                i+=K+1;
            }else{
                i++;
            }
        }
        cout<<alarm<<endl;
    }
    return 0;
}