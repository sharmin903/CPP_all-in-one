#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int total=N*(N+1)/2;
    int M;
    cin>>M;
    for(int i=0; i<M;i++){
        int Mi;
        cin>>Mi;
        total-=Mi;
    }
    cout<<total;

}