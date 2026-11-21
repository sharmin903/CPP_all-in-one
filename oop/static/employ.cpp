#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    static int count;
    string Name;
    string Degination;
    public:
    Employee(string n, string d){
        Name=n;
        Degination=d;
    }
    void counter(){
        count=count+1;
    }
    static int getcount(){
        return count ;
    }
    void display(){
        cout<<"Employee Name: "<<Name<<"\nHis degination : "<<Degination<<endl;
    }

};
int Employee::count=0;
int main(){
    Employee e1("Sakina","Assistan Manager");
    e1.display();
    Employee e2("Sorif","Coustum office");
    e2.display();
    Employee e3("sihab","Diginer");
    e3.display();
    e1.counter();
    e2.counter();
    e3.counter();
    cout<<"Total Present today: "<<Employee::getcount()<<endl;
    return 0;
}