// Access Specifiers + Outside Definitions
// Employee Class Employee with name, salary (private). Declare all functions inside the class, but define every function outside using ::
// Syntax to use: function declared in class, defined outside with scope resolution operator

#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
    string Name;
    double Salary;
    public:
    Employee(string n, double s );
    void display();
    void giveRise(double amount);
};
Employee::Employee(string n, double s ){
    Name=n;
    Salary=s;
}
void Employee::display(){
        cout << "Name: " << Name << ", Salary: " << Salary << endl;
}
void Employee::giveRise(double amount){
    Salary=Salary+amount;
};
int main(){
    Employee e("sharmin",40000);
    e.giveRise(34900);
    e.display();
    
    return 0;
}