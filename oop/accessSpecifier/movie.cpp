// Movie Ticket (access specifiers + outside definitions)
// Class Ticket with movieName (private, string), seatsAvailable (private, int). Constructor takes both. Declare bookSeat() and getSeatsAvailable() inside the class, define both outside with ::. bookSeat() should reduce seatsAvailable by 1 — but refuse (print a message) if seatsAvailable is already 0.
// Watch for: which function changes data (void) vs. which one reports data (returns a value)

#include <iostream>
#include <string>
using namespace std;
class Ticket
{
private:
    string movieName;
    int seatsAvailable = 0;

public:
    Ticket(string n, int s);
    void bookSeat();
    int getSeatsAvailable();
};
Ticket::Ticket(string n, int s)
{
    movieName = n;
    seatsAvailable = s;
}

void Ticket::bookSeat()
{
    if (seatsAvailable == 0)
    {
        cout << "All seats are booked!" << endl;
    }
    else
    {
        seatsAvailable=seatsAvailable-1;
        cout << "After booking seats avilable are: " <<seatsAvailable<<endl;
    }
}
int Ticket::getSeatsAvailable()
{
    return seatsAvailable;
}
int main(){
    Ticket t1("Avater", 33);
    t1.getSeatsAvailable();
    t1.bookSeat();
    cout << "Seats left: " << t1.getSeatsAvailable();
    
    return 0;
}