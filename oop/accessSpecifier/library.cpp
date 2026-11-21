// Access Specifiers + Outside Definitions
//Class LibraryFine with daysLate (private, int) and finePerDay (private, double). Constructor takes both. Public function calculateFine() returns daysLate * finePerDay, but if daysLate is 0 or negative, it should return 0 and print "No fine due." instead of calculating.
//Syntax to use: private, public, validation logic inside member function

#include <iostream>
using namespace std;
class LibraryFine{
    private:
    int daysLate;
    double finePerDay;
    public:
    LibraryFine(){
        daysLate=0;
        finePerDay=0;
    }
    LibraryFine(int d,double f){
        daysLate=d;
        finePerDay=f;
    }

    double calculateFine(){
        if(daysLate==0||daysLate<0){
            cout<<"No fine due."<<endl;
            return 0;
        }
        else{
            return daysLate*finePerDay;
        }

    }
    
};
int main (){
    LibraryFine l(3,140);
    cout<<"Total fine = "<<l.calculateFine()<<endl;
    return 0;

}