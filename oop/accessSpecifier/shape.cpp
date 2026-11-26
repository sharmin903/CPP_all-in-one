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
    double rectangle( );
    double square();
    void display();
};
double Shape:: rectangle( ){
    return length*breath;
}
double Shape:: square(){
    return length*length;
}
void Shape::display(){
    cout<<"Area of the rectangle: "<<rectangle()<<endl;
    cout<<"Area of the suqre: "<<square()<<endl;
}
int main(){
    Shape s(2.3, 4.5);
    s.display();
    return 0;
}