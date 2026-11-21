#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=1; i<=T;i++){
        int A, B;
        cin>>A>>B;
        int sum= A+B;
        int sub=A-B;
        cout<< "Case "<<i<<": "<<sum<<sub;
    }
    return 0;
}