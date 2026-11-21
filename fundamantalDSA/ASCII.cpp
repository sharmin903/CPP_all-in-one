#include<iostream>
using namespace std;
int main(){

    float P;
    cin>>P;
    int f=(int)P;
    cout<<"[";
    for(int i=1;i<=(f/10);i++){
        cout<<"+";
    }
    for(int i=1; i<=(10-(f/10));i++){
        cout<<".";
    }
    cout<<"]";
	cout<<" ";
    cout<<f<<"%";
    return 0;
}