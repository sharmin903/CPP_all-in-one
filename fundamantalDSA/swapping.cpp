#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a; // read: put *a (which is 5) INTO temp  →  temp = 5
    *a = *b;       // read: put *b (which is 3) INTO *a    →  a = 3
    *b = temp;     // read: put temp (which is 5) INTO *b  →  b = 5
}
int main()
{
    int a, b;
    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "Enter ther 2nd number: ";
    cin >> b;
    swap(&a, &b);
    cout << "1st number after swap: " << a << endl;
    cout << "2nd number after swap: " << b << endl;
    return 0;
}