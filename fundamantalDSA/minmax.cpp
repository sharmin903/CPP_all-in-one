#include <iostream>
using namespace std;
void find(int a, int b, int c, int *min, int *max)
{
    *min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    *max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}
int main()
{
    int a, b, c, min, max;
    cout << "Enter the two number: ";
    cin >> a >> b>>c;
    find(a, b, c, &min, &max);
    cout << "The max number is :" << max << endl;
    cout << "The min number is : " << min << endl;
    return 0;
}