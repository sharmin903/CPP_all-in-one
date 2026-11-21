#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int age;

    void setPerson( string n, int a){
        name=n;
        age=a;
    }
    void showPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Student: public Person{
    public:
    int ID;
    double CGPA;
    void setStudent(int id, double cg){
        ID=id;
        CGPA=cg;
    }
    void showAll(){
        showPerson();
        cout<<"Student ID: "<<ID<<endl;
        cout<<"Their CGPA: "<<CGPA<<endl;
    }
};
int main(){
    Student s;
    s.setPerson("Nabila", 23);
    s.setStudent(91, 3.45);
    s.showAll();
    return 0;
}