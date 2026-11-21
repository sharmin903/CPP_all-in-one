#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        int count=0;
        int door=0;
        for(int i=0; i<(int)S.size();i++){
            if(i>0 && S[i]==S[i-1])count++;
            else{
                door +=count/3;
                count=1;
            }
            
        }
        door+=count/3;
        cout<<door<<endl;
    }
    return 0;
}