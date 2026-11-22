#include<iostream>
using namespace std;
class Employee{
    public:
    void work(){cout<<"Working\n";}
};
class Manager : public Employee{
    public:
    void manage(){cout<<"Managing\n";}
};
class Enginner: public Employee{
    public: 
    void design(){cout<<"Designing\n";}
};
class Clerk: public Employee{
    public: 
    void file(){cout<<"Filling\n";}
};
int main(){
    Manager m;
    m.work();
    m.manage();

    Enginner e;
    e.design();
    e.work();
    return 0;

}