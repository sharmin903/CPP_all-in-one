// Pointers + References to Objects
// Temperature (reference) Class Temperature with celsius. Function toFahrenheit(). In main(), create one object, then create a reference to it and call the function through the reference.
// Syntax to use: ClassName& ref = obj;
#include<iostream>
using namespace std;
class Temperature {
    private:
    double celcius;
    public:
    Temperature(double c){
        celcius=c;
    }
    double toFahrenheit(){
        return celcius*9/5+32;
    }
};
int main(){
    Temperature t(45.09);
    Temperature& ref=t;
    cout<<"the farhenhit:"<<ref.toFahrenheit()<<endl;
}
