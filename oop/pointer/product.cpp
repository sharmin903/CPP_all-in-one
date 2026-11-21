// Pointers + References to Objects
// Product (heap allocation) Class Product with name, price. In main(), create a Product object using new, access its members with ->, then delete it.
// Syntax to use: new, ->, delete

#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    string name;
    double price;

public:
    Product(string n, double p)
    {
        name = n;
        price = p;
    }
    void display()
    {
        cout << "Name of the product: " << name << " Price of the product: " << price << endl;
    }
};
int main()
{
    // Product* the type of p1 is "pointer to a Product", p1	the name of the pointer,
    Product *p1 = new Product("Vasline", 345); // new is a keyword that means "allocate memory and give me the address"
    p1->display();
    p1=nullptr;
    return 0;
}