// 1. Student Record Class Student with name, roll, marks. Default constructor sets marks to 0. Parameterized constructor sets all three. Function display() prints them.

// Syntax to use: default constructor, parameterized constructor//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class student
{
private:
    string Name;
    int Roll;
    vector<double> Marks;

public:
    student()
    {
        Name = " ";
        Roll = 0;
    }
    student(string n, int r)
    {
        Name = n;
        Roll = r;
    }
    void addMark(double m)
    {
        Marks.push_back(m);
    }
    void display() const
    {
        cout << "Name: " << Name << " Roll: " << Roll << " Marks: ";
        for (double m : Marks)
        {
            cout << m << endl;
        }
    }
};
int main()
{
    vector<student> students;
    students.push_back(student("Namira", 23));
    students.push_back(student("Nira", 30));
    students[0].addMark(35);
    students[0].addMark(32);
    students[1].addMark(87);
    students[1].addMark(20);

    for (const auto &s : students)
    {
        s.display();
    }
    return 0;
}

/*class student
{
private:
    string Name;
    int Roll;
    double Mark;

public:
    student()
    {
        Name = "";
        Roll = 0;
        Mark= 0;
    }
    student(string n, int r,double m)
    {
        Name = n;
        Roll = r;
        Mark=m;
    }
    void display() const
    {
        cout << "Name: " << Name << " Roll: " << Roll << " Marks: "<<Mark << endl;
    }
};
int main()
{
    student s1("Rahim",45,34);
    student s2("Karim",23,67);
    student s3("Kshim",30,79);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}*/
