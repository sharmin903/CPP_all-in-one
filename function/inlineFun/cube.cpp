#include<iostream>
using namespace std;
inline float mul(float x, float y){
    return (x*y);
}
inline double div(double p,double q){
    return (p/q);
}
int main(){
    float a= 12.345;
    float b=9.34;
    cout<<mul(a,b)<<endl;
    cout<<div(a,b)<<endl;
    return 0;
}
inline float na(int c , int d){
    return c*d;
}