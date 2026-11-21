/* Counter Class Counter that counts how many objects have been created, using a static int count. Increment it in the constructor. Add a static function getCount() that returns it. Create 3–4 objects and print the count.

Syntax to use: static member variable, static member function, define static var outside class*/

#include <iostream>
using namespace std;
class Counter
{
private:
    static int count;

public:
    Counter()
    {
        count = count + 1;
    }
    static int getCount()
    {
        return count;
    }
};
int Counter::count = 0;
int main()
{
    Counter c1;
    Counter c2;
    Counter c3;
    Counter c4;

    cout << "Total objects created: " << Counter::getCount() << endl;
    return 0;
}