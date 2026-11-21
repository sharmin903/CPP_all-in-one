//when we are given a string and we need to make the string convert into array then we have to do some basic steps here and it is just like this . 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int count[10]={0};
    for(char c:S){
        count[c-'0']++;
    }
    int best=0;
    for(int d=1 ; d<=9; d++){
        if(count[d]>count[best]){
            best=d;
        }
    }
    cout<<best<<endl;
return 0;
}