/* Library — full mix Class Book with title (private), available (private, bool). Constructor, a public borrowBook() and returnBook() function (defined outside the class), and a static int totalBooks counter. In main(), create a pointer to a dynamically allocated array of 3 books using new Book[3] (research this one — same idea as new, just for an array), borrow one via a pointer, then delete[] at the end.

Syntax to use: everything above combined, plus new ClassName[size] / delete[]
Here are four more, mixing both categories — some also stress-test the "return vs. change" distinction you're still solidifying.*/

#include<iostream>
#include<string>
using namespace std;
class Book{
    private:
    string Title;
    bool available;
    public:
    Book(){
        Title=" ";
        available=true;
                totalBooks = totalBooks+1;

    }
    Book(string n);
    void borrowBook();
    void returnBook();
    static int totalBooks;
    
};
int Book::totalBooks=0;
Book::Book(string n){
        Title=n;
        available=true;
    }


void Book::borrowBook(){
    if (available==false){
        cout<<"this book is alrady borrowed !"<<endl;
    }
    else{
        available=false;
        cout<<"Book Borrowed !"<<endl;
    }
    
}
void Book::returnBook(){
    available=true;
    cout<<"Book returned ! "<<endl;
}
int main(){
    Book *p = new Book[3];
    p[0].borrowBook();
    p[1].borrowBook();
    p[2].borrowBook();
    p[1].borrowBook();
    p[1].returnBook();
    cout << "Total books : " << Book::totalBooks << endl;
    delete[] p;
    return 0;

}