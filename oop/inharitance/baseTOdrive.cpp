//single inheritance, with public mode.
#include<iostream>
using namespace std;
class Student{
    public:
    void info(){
        cout<<"Name: Alim Sharkar "<<endl;
    }
};
class Marks: public Student{public:
    void result(){
        cout<<" Bangla: 23 \n"<<"English: 45 \n"<<"Math: 98\n"<<endl;
    }
    };

int main(){
    Marks m;
    m.info();
    m.result();
    return 0;
}