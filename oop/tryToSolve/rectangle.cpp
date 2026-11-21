//2. Rectangle Class Rectangle with length, width. Constructor takes both. Functions area() and perimeter().
//Syntax to use: constructor, member functions

#include <iostream>
using namespace std;
class Ractangle{
    private:
    double length;
    double width;

    public:
    Ractangle(double l, double w){
        length=l;
        width=w;
    }
    double area(){
        return length*width;
    }
    double perimeter(){
        return 2*(length+width);
    }

};
int main(){
    double l,w;
    cout<<"Enter the length of rectangle: ";
    cin>>l;
    cout<<"Enter the width of rectangle: ";
    cin>>w;
    Ractangle rect(l,w);
    cout<<"The area of Ractangle: "<<rect.area()<<endl;
    cout<<"The perimeter of the Ractangle: "<<rect.perimeter()<<endl;
    return 0;
}