#include <iostream>
using namespace std;
void sortThree(int &a, int &b, int &c)
{
    int temp;
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
}
int main()
{
    int num1 = 34, num2 = 40, num3 = 23;
    cout << "Before swapping: " << num1 << "," << num2 << "," << num3 << endl;
    sortThree(num1, num2, num3);
    cout << "After swapping: " << num1 << "," << num2 << "," << num3 << endl;
    return 0;
}