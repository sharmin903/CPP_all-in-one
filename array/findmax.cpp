#include <iostream>
using namespace std;
void findMax(int a[30], int n, int *max)
{
    *max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (*max < a[i])
        {
            *max = a[i];
        }
    }
}
int main()
{
    int a[30], n, i, max;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The array we got:";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    findMax(a, n, &max);
    cout << "The max value is : " << max << endl;
}