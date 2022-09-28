#include <iostream>
using namespace std;

int main() {

  int year;
  cout << "Enter a year: ";
  cin >> year;
  if (year % 400 == 0) {
    cout << year << " is a leap year.";
    cout<<"\n"<<"The next leap year is "<<year+4;
  }
  else if (year % 100 == 0) {
    cout << year << " is not a leap year.";
    cout<<"\n"<<"The next year is "<<year+1;
  }
  else if (year % 4 == 0) {
    cout << year << " is a leap year.";
    cout<<"\n"<<"The next leap year is "<<year+4;
  }

  else {
    cout << year << " is not a leap year.";
    cout<<"\n"<<"The next year is "<<year+1;
  }

  return 0;
}
