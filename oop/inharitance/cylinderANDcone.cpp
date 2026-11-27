#include<iostream>
using namespace std;
const double pi=3.1416;
class Solid{
    protected:
    double redius;
    double height;
    public:
    Solid(double r, double h){
        redius=r;
        height=h;
    }
    //pure virtual function
    virtual void displayVolume()=0;
};
class Cylinder: public Solid{

    public:
    Cylinder(double r, double h) : Solid(r, h) {}
    double cylin(){
        return pi*redius*redius*height;
    }
    void displayVolume(){
        cout<<"Volume of Cylinder : "<<cylin()<<endl;
    }
};
class Cone: public Solid{
    public:
    Cone(double r, double h) : Solid(r, h) {}
    double cone(){
        return (1.0/3)*pi*redius*redius*height;
    }
    void displayVolume(){
        cout<<"Volume of Cylinder : "<<cone()<<endl;
    }

};
int main(){
    Cylinder cy(3.4,9);
    Cone co(3.4,6);
    cy.displayVolume();
    co.displayVolume();
    return 0;
}