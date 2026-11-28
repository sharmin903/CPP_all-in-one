#include <iostream>
using namespace std;
class Box
{
    double length;
    double width;

public:
    Box(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    Box& setLength(double length)
    {
        this->length=length;;
        return *this;
    }
    Box& setWidth(double width)
    {
        this->width=width;
        return *this;
    }
    void showTheObj()
    {
        cout << "Object Adress: " << this << endl;
    }
    void show()
    {
        cout << length << " X " << width << endl;
    }
};
int main()
{
    Box a(3.45, 23.1);
    Box b(6.2, 4.2);

    a.show();                      // 3.45 X 23.1
    a.setLength(10).setWidth(7);   // change values
    a.show();                      // 10 X 7  <-- add this line

    a.showTheObj();                // address of a
    b.showTheObj();                // different address
}