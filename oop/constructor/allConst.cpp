#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    float CGPA;
    public:
    string Name;
    int ID;
    //default constructor
    Student(){
        Name="Unknown";
        ID=0;
        CGPA=0;
    }
    //parameterized constructor
    Student(string n, int id, float cg){
        Name=n;
        ID=id;
        CGPA=cg;
    }
    Student(const Student &s){
        ID=s.ID;
        Name=s.Name;
        CGPA=s.CGPA;
    }
    void display(){cout<<Name<<ID<<CGPA<<endl;}

};
int main(){
    Student s1;
    Student s2("Neloy",12,3.4);
    Student s3(s2);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}