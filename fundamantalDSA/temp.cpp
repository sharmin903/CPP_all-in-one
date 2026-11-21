#include<iostream>
using namespace std;
void conversion(float Celsius,float *Fahrenheit ,float *Kelvin){
    *Fahrenheit = Celsius*1.8+32;
    *Kelvin = Celsius+273.25;
}


int main()
{
    float Celsius,Fahrenheit,Kelvin;
    cout<<"Enter the temprature in Celsius : ";
    cin>> Celsius;
    conversion(Celsius, &Fahrenheit , &Kelvin);
    cout<< "The Tempeture in Fahrenheit : "<< Fahrenheit << endl;
    cout<< "The Tempeture in Kelvin : "<< Kelvin << endl;
    return 0 ;
}