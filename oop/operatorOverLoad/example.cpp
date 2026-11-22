#include<iostream>
using namespace std;
class Number{
    public:
    int x;
    Number(int a){
        x=a;
    }
    Number operator+(Number obj){
        Number temp(0);
        temp.x=x+obj.x;
        return temp;
    }
};
int main(){
    Number n1(10),n2(20),n3(0);
    n3=n1 + n2;
    cout<<"sum="<<n3.x;
    return 0;
}