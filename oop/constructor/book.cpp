//3. Book Copy Class Book with title, price. Add a copy constructor that prints "Copying book..." when called. Create one object normally, then create a second object from the first using the copy constructor.
//Syntax to use: copy constructor (ClassName(const ClassName &obj))

#include<iostream>
#include<string>
using namespace std;
class BookCopy{
    private:
    string title;
    double price;
    public:
    BookCopy(string t, double p){
        title=t;
        price=p;
    }
    // COPY CONSTRUCTOR
    BookCopy(const BookCopy &print){ 
        title = print.title;
    price = print.price;
    cout<<"Copying book..."<<endl;
    }
    void display () const{
        cout<<"title :"<<title<<" price: "<<price<<endl;
    }
};
int main(){
    BookCopy s("Intermezzo",560);
    s.display();
    return 0;
}
/*
COPY CONSTRUCTOR — short notes

Runs automatically when:
1. Passing object to a function BY VALUE (not by reference)
2. Returning object BY VALUE from a function
3. Creating one object directly from another: BookCopy b2 = b1;

Job: copy each member variable from the original into the new object.
If you don't copy manually, new object gets garbage/uninitialized data.

Why it matters (real use case):
- If a class has a pointer (e.g. int* data = new int[size]),
  default copying just copies the POINTER, not the memory it points to.
- Result: two objects pointing to same memory (shallow copy) = bug.
  Delete one -> other becomes dangling. Change one -> other changes too.
- Fix: write your own copy constructor that copies the actual data
  (deep copy), not just the pointer.

For simple types (string, double, int) — C++'s default copy constructor
already works fine. You only NEED to write your own when the class
manages memory/pointers directly.
*/