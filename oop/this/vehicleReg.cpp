/*Vehicle Registration (this-> only)
Class Vehicle with brand, model (both string). Constructor parameters are named identically to the members (intentional clash — resolve with this->). Add a display() function.

No static needed here — just practice spotting the clash again*/

#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    private:
    string Brand;
    string Model;
    public:
    Vehicle(string Brand, string Model){
        this->Brand=Brand;
        this->Model=Model;
    }
    void display(){
        cout<<"Brand Name: "<<Brand<<"\nModel Name: "<<Model<<endl;
    }
};
int main(){
    Vehicle v1("Ford","F-150");
    Vehicle v2("Toyota","Camry");
    v1.display();
    v2.display();
    return 0;
}