#include <iostream>
#include <string>
using namespace std;
int countLegal(string S)
{
    int count = 0;
    for (char c : S)
    {
        if (c != 'N' && c != 'W' && c != 'D')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        string S;
        cin>>S;
        int Ball=countLegal(S);
        int Over= Ball/6;
        int rem=Ball%6;
        if(Over>0){
            cout << Over << (Over == 1 ? " OVER" : " OVERS");
        }
        if(rem>0){
            if(Over>0)cout<<" ";
            cout << rem << (rem == 1 ? " BALL" : " BALLS");
        }
        cout<<"\n";
    }
    return 0;
}

