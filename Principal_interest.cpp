#include <iostream>

using namespace std;

int main () {
  float principalBalance, annualInterest, time, finalAmount;

  cout << "Enter Principal Balance: ";
  cin >> principalBalance;
  cout << "Enter Annual Interest: ";
  cin >> annualInterest;
  cout << "Enter time in year: ";
  cin >> time;

  finalAmount = (principalBalance * annualInterest * time) /  100;

  cout << "The Interest is: " << finalAmount << endl;

  return 0;
}