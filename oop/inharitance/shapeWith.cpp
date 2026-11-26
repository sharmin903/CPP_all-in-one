#include<iostream>
using namespace std;
class Shape{
    protected:
    double length;
    double breath;
    public:
    void setData(double l, double b){
        length=l;
        breath=b;
    }
};
class Rectangle:public Shape{
    public:
    double area(){
        return length*breath;
    }
};
class Square:public Shape{
    public:
    void side(double side){
        length=breath=side;
    }
    double area(){
        return length*breath;
    }
};
int main(){
    Rectangle rect;
    Square sq;
    rect.setData(5.0,6.8);
    sq.side(4.0);
    cout<<"Area of the rectangle: "<<rect.area()<<endl;
    cout<<"Area of the squre: "<<sq.area()<<endl;
    return 0;
    
}