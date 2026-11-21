#include <iostream>
#include<cmath>
using namespace std;
class Circle
{
private:
    double radius;
    static const double pi;

public:
    Circle(double r)
    {
        radius = r;
    }
    double area()
    {
        return pi * pow(radius, 2);
    }
    double circumference()
    {
        return 2 * pi * radius;
    }
};
const double Circle::pi = 3.14159;

int main(){
    Circle rect(5.0);
    cout<<"Area: "<<rect.area()<<endl;
    cout<<"Circumference: "<<rect.circumference()<<endl;
    return 0;
}