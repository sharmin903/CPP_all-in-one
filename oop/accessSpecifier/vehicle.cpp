// Access Specifiers + Outside Definitions              
// Class Vehicle with brand (string) and fuelLevel (double), both private. Declare a constructor, a refuel(amount) function, a drive(distanceUsesFuel) function that reduces fuelLevel (refuse and print a message if there isn't enough fuel to cover it), and a display() function — all declared inside the class, all defined outside using ::
// Syntax to use: function declared in class, defined outside with scope resolution operator, validation logic

#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    private:
    string brand;
    double fuelLevel;
    public:
    Vehicle(string b, double f);
    void refuel(double amount);
    void drive(double distanceUsesFuel);
    void display();

};
Vehicle::Vehicle(string b, double f){
    brand=b;
    fuelLevel=f;
}
void Vehicle:: drive(double distanceUsesFuel){
    if (fuelLevel<distanceUsesFuel){
        cout<<"there isn't enough fuel to cover it"<<endl;
    }else{
    fuelLevel=fuelLevel-distanceUsesFuel; 
    }
}
void Vehicle::refuel(double amount){
 fuelLevel+amount;
}
void Vehicle::display(){
    cout<<"Brand: "<<brand<<" Fuel Level: "<<fuelLevel<<endl;
}
int main(){
    Vehicle v1("Marcedes",23400);
    v1.drive(4586);
    v1.refuel(4573474);
    v1.display();
    Vehicle v2("Ferrie",265400);
    v2.drive(43957874);
    v2.refuel(4500);
    v2.display();

    return 0;
}