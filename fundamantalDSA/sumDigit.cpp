#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter The Number: ";
    cin >> number;

    int sum = 0;
    int t;
    while(number!=0)
    {
        t = number % 10;
        sum += t;
        number = number / 10;
    }
    cout << "The sumation of the digits: " << sum << endl;
    return 0;
}