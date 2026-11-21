#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Eating\n";
    }
};
class Mammal: public Animal{
    public: 
    void walk(){
        cout<<"Walking\n";
    }
};
class Dog: public Mammal{
    public:
    void barking(){
        cout<<"Barking\n";
    }
};
int main(){
    Dog d;
    d.walk();
    d.eat();
    d.barking();
    return 0;
}