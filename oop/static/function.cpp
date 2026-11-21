#include<iostream>
using namespace std;
class Test{
    static int count;
    int code;
    public:
    void setcode(){
        code = ++count;
    }
    void showcode(){
        cout<<"object number: "<<code<<"\n";
    }
    static void showcount(){
        cout<<"count: "<< count <<endl;
    }
};
int Test::count=0;
int main(){
    Test t1,t2;

    t1.setcode();//counting
    t2.setcode();//counting
    Test::showcount();//showing what i count

    Test t3;
    t3.setcode();//counting
    Test::showcount();//showing what i count

    t1.showcode();//count the object
    t2.showcode();//count the object
    t3.showcode();//count the object
    return 0;

}