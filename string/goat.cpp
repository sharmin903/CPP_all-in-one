#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;

    vector<string>lines(N);
    size_t length=0;

    for(int i=0;i<N;i++){
        string s;
        cin>>s;

        int k= s.size()-1;
        if(k%2==1){
            k--;
            if(k==0)k=2;
        }
        lines[i]="b"+string(k,'a');
        if (lines[i].size()>length)length=lines[i].size();
    }
    for(int i=0; i<N;i++){
        int spaces=(length-lines[i].size())/2;
        cout<<string(spaces,' ')<<lines[i]<<endl;
    }
    return 0;
}