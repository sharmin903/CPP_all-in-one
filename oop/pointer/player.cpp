// Player Health (pointers)
// Class Player with name (private, string), health (private, int). Constructor takes both. Function takeDamage(int amount) reduces health — if it would go below 0, set it to 0 instead. Function getHealth() returns it. In main(), create the object using new, call both functions through the pointer, then delete it.
// Watch for: -> vs ., and not using the pointer after delete
#include<iostream>
#include<string>
using namespace std;
class Player{
    private:
    string Name;
    int Health;
    public:

    Player(string n, int h){
        Name=n;
        Health=h;
    }
    int takeDamage(int amount){
        if(Health-amount<0){
            return Health;
        }
        else{
            Health=Health-amount;
        }
    }
    int getHealth(){
        return Health;
    }
    void display(){
        cout<<"Name of the player: "<<Name<<" Health of the player: "<<Health<<endl;
    }
};
int main(){
    Player *p1=new Player("Kirill",95);
    Player *p2=new Player("Konstantent",35);
    p1->display();
    p2->display();
    delete p1;
    p1=nullptr;
    delete p2;
    p2=nullptr;
    return 0;
}