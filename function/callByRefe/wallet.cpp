// Wallet (references)**
// Class `Wallet` with `cash` (private, double). Constructor takes a starting amount. Public functions `addCash(amount)` and `spendCash(amount)` (refuse if amount > cash), both declared inside, defined outside with `::`. In `main()`, create one object, then create a reference to it, and do **all** your function calls through the reference, not the original object.
// - Watch for: functions using their own member variable, not needing you to pass in data they already have

#include <iostream>
#include <string>
using namespace std;
class Wallet
{
private:
  double cash;
  string amount;

public:
  Wallet(double c);
  void addCash(double amount);
  void spanCash(double amount);
  double getCash();
  void display();
};
Wallet::Wallet(double c)
{
  cash = c;
}
void Wallet::addCash(double amount)
{
  cash = cash + amount;
}
void Wallet::spanCash(double amount)
{
  if (amount > cash)
  {
    cout << "out of cash!" << endl;
  }
  else
  {
    cash = cash - amount;
  }
}
double Wallet::getCash()
{
  return cash;
}
void Wallet::display()
{
  cout << "your final cash: " << cash << endl;
}
int main()
{
  Wallet w1(450000);
  Wallet &ref = w1;
  ref.addCash(34550);
  ref.spanCash(3645633);
  ref.spanCash(4754858733);
  ref.display();
  ref.getCash();
  return 0;
}
/*
RETURN vs VOID — quick rule

Ask: does this function need to hand a value back to the caller?
  YES -> return something, give it a real return type (int/double/string...)
  NO  -> void, no return needed

How to tell which:
- Name starts with "get" -> always return
    int getHealth() { return Health; }

- Function sets/changes/updates/reduces/increases a member variable -> always void, use =
    void takeDamage(int amount) { Health = Health - amount; }
    void deposit(double amount) { balance = balance + amount; }

- Function just prints something -> always void
    void display() { cout << ...; }

Checklist for every function:
1. Am I changing a member variable?      -> void, use =
2. Am I handing back a value on request? -> return, with a real type
NEVER both at once — a function is either a "doer" (void) or a "reporter" (return).
*/