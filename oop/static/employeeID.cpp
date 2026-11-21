/* Employee ID (static only)
Class Employee with name (string, private) and a static int nextId. Every time an object is created, assign it an ID equal to the current nextId, then increase nextId by 1 (so the first employee gets ID 1, the next gets ID 2, etc — you'll need a private int myId member too, non-static, to store each object's own assigned ID). Add getMyId() (non-static — reports one object's own ID) and a static getNextId() (reports the next ID that would be assigned).*/
#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    string Name;
    int myID;
    static int nextID;
    public:
    Employee(string n){
        Name=n;
        myID=nextID;
        nextID=nextID+1;
    }
    int getMyID(){
        return myID;
    }
    static int getNextID(){
        return nextID;
    }
    void display(){
        cout<<"Name of the employee: "<<Name<<"\n His Employee ID: "<<myID<<endl;;
    }
};
int Employee::nextID=1;
int main(){
    Employee e1("karim");
    e1.display();
    Employee e2("Sohel");
    e2.display();
    Employee e3("Ruble");
    e3.display();
    cout<<"Next Employee ID will be  : "<<Employee::getNextID()<<endl;
    

}