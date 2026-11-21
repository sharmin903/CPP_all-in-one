#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
    cin>>s;
    string rev_str;
    for(int i= s.size()-1; i>=0;--i){
        rev_str.push_back(s[i]);
    }
    cout<<rev_str<<endl;
    //if(rev_str==s) cout<<"yes"<<endl;
    //else cout<<"no"<<endl;
    return 0;
}
