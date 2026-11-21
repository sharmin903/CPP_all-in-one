#include<iostream>
using namespace std;
class Complex{
    private: 
    float x,y;
    public:
    Complex(){}; //constructor with no argument;
    Complex(float a){ //constructor with one argument
        x=y=a;
    }
    Complex(float real , float img){
        x=real;
        y=img;
    }
    friend Complex sum(Complex ,Complex);
    friend void show(Complex);

};
Complex sum(Complex c1, Complex c2){
    Complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
}

void show(Complex c){
    cout<<c.x<<" + j "<<c.y<<"\n";

}
int main(){
      Complex A(2.3,4.5);
      Complex B(3.4);
      Complex C;
      C=sum(A,B);

      cout<<"A = "; show(A);
      cout<<"B = ";show(B);
      cout<<"C = ";show(C);
      cout<<"\n";

      Complex P,Q,R;
      P=Complex(4.5,6.7);
      Q=Complex(5.3);
      R=sum(P,Q);
      
      cout<<"\n";
      cout<<"P = ";show(P);
      cout<<"Q = "; show(Q);
      cout<<"R = "; show(R);
      return 0;

}
