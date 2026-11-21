#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    if(S.size()!=5){
        cout<<"Invalid!"<<endl;
        return 0;
    }
    cout<<S[0]<<S[2]<<S[4]<<endl;
    return 0;
}