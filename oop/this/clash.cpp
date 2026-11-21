/*Syntax to use: ClassName& ref = obj;
Set 4: this Pointer + Static Members
8. Box (name clash) Class Box with length, width, height. Constructor parameters have the same names as the member variables. Use this-> to resolve the clash.
Syntax to use: this->memberVariable*/

#include<iostream>
using namespace std;
class Box{
    private:
    double length;
    double width;
    double hight;
    public:
    Box(double lenght,double width,double hight){
        this-> length=lenght;
        this-> width=width;
        this-> hight=hight;
    }
    void display(){
        cout<<"Length:"<<length<<"\nWidth:"<<width<<"\nhigth:"<<hight<<endl;
    }

};
int main(){
    Box e1(23.5, 45.6,68.5);
    e1.display();
    return 0;
}

