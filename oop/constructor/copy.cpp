#include<iostream>
using namespace std;
class Code{
    private:
    int id;
    public:
    Code(){
        id=0;
    }
    Code(int a){
        id=a;
    }
    Code(const Code &x){
        id=x.id;
    }
    void display(){
        cout<<"ID= "<<id<<endl;
    }
};
int main(){
    Code A(100);
    Code B(A);
    Code C=A;
    Code D;
    D=A;

    cout<<"ID of A: "; A.display();
    cout<<"ID of B: "; B.display();
    cout<<"ID of C: "; C.display();
    cout<<"ID of D: "; D.display();
    return 0;

}