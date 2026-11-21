#include<iostream>
#include<cmath>
using namespace std;
const float pi=3.1416;
void circleInfo(float r, float *Circumference, float *Area){
    *Circumference=2*pi*r;
    *Area=pi*pow(r,2);
}

int main(){
    float r,Circumference,Area;
    cout<<"Enter the radius for the circle: ";
    cin>>r;
    circleInfo( r,&Circumference, &Area);
    cout<<"The circumference of the circle is :"<<Circumference<<endl;
    cout<<"The area of the circle is :"<<Area<<endl;
    return 0;
}