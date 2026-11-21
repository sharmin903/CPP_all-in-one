// Access Specifiers + Outside Definitions
//Bank Account Class Account with balance as private. Public functions deposit(amount), withdraw(amount), getBalance(). Withdraw should refuse if amount > balance.

//Syntax to use: private, public, validation logic inside member function

#include<iostream>
using namespace std;
class Bank{
    private:
    double balance;
    public:
    Bank(double startingBalance){
        balance=startingBalance;
    }
    void deposit(double amount){
        balance=balance+amount;
    }
    void withdraw(double amount){
        if (balance<amount){
            cout<<"Insufficient balance!"<<endl;
        }
        else{
            balance=balance-amount;
        }
    }
    double getbalance(){
        return balance;
    }
};
int main(){
    double startingBalance;
    cout<<"Enter the starting balance of ur account:  ";
    cin>>startingBalance;
    Bank account(startingBalance);
    account.deposit(43469);
    account.withdraw(85960);
     cout << "Balance: " << account.getbalance() << endl;
    return 0;
}
