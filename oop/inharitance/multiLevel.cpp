#include<iostream>
using namespace std;
class Animal{
    public:
    void behave(){
        cout<<"Eating\n";
        cout<<"Breathing\n";
    }
};
class Fish: public Animal {
    public:
    void behave_of_fish(){
        cout<<"Swimming\n";
    }
};
class Hilisha: public Fish{
    public:
    void behave_of_hilish(){
        cout<<"Special in Padma\n";
    }
};
int main(){
    Hilisha f;
    f.behave();
    f.behave_of_fish();
    f.behave_of_hilish();
    return 0;
}