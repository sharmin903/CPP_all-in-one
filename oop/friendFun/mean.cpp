#include<iostream>
using namespace std;
class Sample{
    private:
    int a;
    int b;
    public:
    void setValue(){
        a=10;
        b=40;
    }
    friend float mean(Sample x);
};
 float mean(Sample x){
    return float (x.a+x.b)/2.0;
 }
 int main(){
    Sample X;
    X.setValue();
    cout<<"Mean: "<<mean(X)<<endl;
    return 0;
 }