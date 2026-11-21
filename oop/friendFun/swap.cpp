#include <iostream>
using namespace std;
class Class2;
class Class1
{
private:
    int value1;

public:
    void indata(int a) { value1 = a; }
    void display() { cout << value1 << endl; }
    friend void exchange(Class1 &, Class2 &);
};
class Class2{

private:
    int value2;

public:
    void indata(int a) { value2 = a; }
    void display() {cout << value2 << endl; }
    friend void exchange(Class1 &, Class2 &);
    
};
void exchange(Class1 &x, Class2 &y){
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
int main(){
    Class1 c1;
    Class2 c2;
    c1.indata(100);
    c2.indata(300);

    cout << "Values before exchange\n";
    c1.display();
    c2.display();

    exchange( c1,c2);

    cout << "Values after exchange\n";
    c1.display();
    c2.display();

    return 0;

}