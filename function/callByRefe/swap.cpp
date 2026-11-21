#include<iostream>
using namespace std;
void swapValues(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int num1=5, num2=10;
    cout<<"Before: "<<num1<<","<<num2<<endl;
    swapValues(num1,num2);
    cout<<"After: "<<num1<<","<<num2<<endl;
    return 0;

}