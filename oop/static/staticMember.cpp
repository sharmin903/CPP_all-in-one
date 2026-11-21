#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    string Name;
    string Degination;
    public:
    static int count;
    Employee(string n, string d){
        Name=n;
        Degination=d;
        count= count+1;
    }
    int counter(){
        return count;
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
    cout<<"Total Present today: "<<Employee::count<<endl;
    return 0;

}