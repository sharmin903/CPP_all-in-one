// Library Card (mix of everything)
// Class `LibraryCard` with `studentName` (private, string), `booksBorrowed` (private, int, max allowed is 3). All functions declared inside, defined outside with `::`. `borrowBook()` increases `booksBorrowed` by 1 but refuses if already at 3. `returnBook()` decreases it by 1 but refuses if already at 0. `getBooksBorrowed()` reports the current count. In `main()`, create the object with `new`, do a mix of borrow/return calls through the pointer, then `delete` it.
// - Watch for: three different functions, three different jobs — decide return-vs-void for each one *before* you start typing
#include <iostream>
#include <string>
using namespace std;
class LibraryCard
{
private:
    string studentName;
    int booksBorrowed;

public:

LibraryCard(){
    studentName =" ";
    booksBorrowed =0;
}
    
    LibraryCard(string n, int b);
    void borrowBook();
    void returnBook();
    int getBooksBorrowed();
    void display();
};
LibraryCard::LibraryCard(string n, int b)
{
    studentName = n;
    booksBorrowed = b;
}
void LibraryCard::borrowBook()
{
    if (booksBorrowed >= 3)
    {
        cout << "You can't borrow more than 3 book at a time !!" << endl;
        return;
    }else{
        booksBorrowed = booksBorrowed + 1;
    }
}
void LibraryCard:: returnBook(){
    if(booksBorrowed==0){
        cout<<"theres no book to return ...."<<endl;
    }
    else{
        booksBorrowed=booksBorrowed-1;
    }
}
int LibraryCard::getBooksBorrowed(){
    return booksBorrowed;
}
void LibraryCard::display()
{
    cout << "Name of the student: " << studentName
         << "\nBooks currently borrowed: " << booksBorrowed << endl;
}
int main()
{
    LibraryCard *s1 = new LibraryCard("Shopnil", 1);
    s1->borrowBook();
    s1->display();
    s1->returnBook();
    s1->display();
    delete s1;

    return 0;
}
