#include<iostream>
using namespace std;
class Shape{
    private:
    double length;
    double breath;
    public:
    Shape(double l, double b){
        length=l;
        breath=b;
    }
    friend double rectangle(Shape s);
    friend double square(Shape s);
    void display();
};
double rectangle(Shape s){
    return s.length*s.breath;
}
double square(Shape s){
    return s.length*s.length;
}
void Shape::display(){
    cout<<"Area of the rectangle: "<<rectangle(*this)<<endl;
    cout<<"Area of the square: "<<square(*this)<<endl;
}
int main(){
    Shape s(2.3, 5.6);
    s.display();
    return 0;

}