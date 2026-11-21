#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int total= N*(N+1)*(2*N+1)/6;
    cout<<total<<endl;
    return 0;
}
