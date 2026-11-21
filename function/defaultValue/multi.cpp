#include<iostream>
#include<cmath>
using namespace std;
double compoundInterest(double principle, double rate=5,float year=2);
double compoundInterest(double principle, double rate,float year){
    double interest;
    interest= principle*pow((1+rate/100),year);
    return interest;
}
int main(){
    double math=compoundInterest(34590);
    double math1=compoundInterest(34590,45);
    double math2=compoundInterest(34867,45,1.5);
    cout<<"First Interst: "<<math<<endl;
    cout<<"Second Interest: "<<math1<<endl;
    cout<<"Third Interest "<<math2<<endl;
    return 0;

}