#include <iostream>
using namespace std;
int add(int a, int b);
double add(double a, double b);
float add(float a, float b);

int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}
int main()
{
    cout << "Sum of two ints: " << add(4, 8) << endl;
    cout << "Sum of two doubles: " << add(3.5, 5.7445) << endl;
    cout << "Sum of two floats: " << add(4.3f, 2.5f) << endl;
    return 0;
}