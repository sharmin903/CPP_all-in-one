#include<iostream>
using namespace std;
int count=0;
class Alpha{
    public:
    Alpha(){
        count++;
        cout<<"\nNumber of the object created: "<<count;
    }
    ~Alpha(){
        cout<<"\nNumber of the object destroyed: "<<count;
        count--;
    }
};  
int main(){
    cout<<"\nEnter the main: ";
    Alpha A1,A2,A3,A4;
    {
        cout<<"\nEnter 1st Block:";
        Alpha A5;
    }
    {
        cout<<"\nEnter 2nd Block: ";
        Alpha A6;
    }
    cout<<"\nRe-enter main\n";
    return 0;

}
