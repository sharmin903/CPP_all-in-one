#include <iostream>
using namespace std;
class Teacher{
    public:
    void teach(){cout<<"Teachering\n";}
};
class Researcher{
    public:
    void research(){cout << "Researching\n";}
};
class Professor: public Teacher, public Researcher{
    public:
    void professor(){
        cout<<"Teaching\n";
        cout<<"Researching\n";
    }

};
int main(){
    Professor p;
    p.teach();
    p.research();
    return 0;
}
