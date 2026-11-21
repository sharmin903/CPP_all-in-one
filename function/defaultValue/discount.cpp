#include<iostream>
using namespace std;
double Price( double p, double discount=10);
double Price(double p, double discount){
    double discnt;
    int nowPrice;
    discnt= 1-(discount/100);
    
    nowPrice=p*discnt;

    return nowPrice;
}
int main(){
    double joy;
    double joy1;
    joy=Price(3400);
    joy1=Price(3500,20);

    cout<<"Price after discout:"<< joy<<endl;
    cout<<"Price after discout:"<< joy1<<endl;
    return 0;
}