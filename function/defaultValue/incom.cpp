#include<iostream>
using namespace std;
double value(double p, double n,double r=1.2);
void printLine(char c='*', int len=50);
double value(double p, double n, double r){
    int year=1;
    double sum=p;
    while (year<=n){
        sum=sum*(1+r);
        year++;
    }
return sum;
}
void printLine(char c, int len){
    for(int i=1; i<=len;i++){
        cout<<c;
    }
    cout<<endl;
}
int main(){
    double amount=value(0.7684,4);
    cout<<"Total: "<<amount<<endl;
    printLine();
    printLine('=');
    return 0;
}
