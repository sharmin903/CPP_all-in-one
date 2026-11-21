/*Set 5: Arrays of Objects + Mixed Recap

10. Circle (recap) Class Circle with radius and a static const double pi. Functions area(), circumference(). Create an array of 3 Circle objects with different radii, loop through and print each one's area.

Syntax to use: static const, array of objects, loop*/

#include <iostream>
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
        return pi * radius * radius;
    }
    double circumference()
    {
        return 2 * pi * radius;
    }
};
const double Circle::pi = 3.14167;
int main()
{
    Circle cirs[5] = {Circle(4.5), Circle(6.89), Circle(34.9), Circle(46.9), Circle(46.98)};
    cout << "Area of the first circle: " << cirs[0].area() << endl;
    cout << "Area of the first circumference: " << cirs[0].circumference() << endl;
    cout << "Area of the second circle: " << cirs[1].area() << endl;
    cout << "Area of the second circumference: " << cirs[1].circumference() << endl;
}
