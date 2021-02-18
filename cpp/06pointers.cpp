#include <iostream>
using namespace std;

void celebrateBirthday(int *age); // add a star for a pointer symbol

int main()
{
  int myAge = 25;
  cout << "Before function age: " << myAge << endl;
  celebrateBirthday(&myAge); // & is the address of the var
  cout << "After function age: " << myAge << endl;

  // ARRAYS
  int luckyNumbers[5] = {1, 3, 5, 6, 8};
  cout << luckyNumbers << endl;
  cout << &luckyNumbers[0] << endl;
  cout << luckyNumbers[0] << endl;

  int *luckyPointer = luckyNumbers;
  cout << "Pointing to " << luckyPointer << ", value: " << *luckyPointer << endl;
  luckyPointer++;
  cout << "Pointing to " << luckyPointer << ", value: " << *luckyPointer << endl;
  system("pause>0");
}

void celebrateBirthday(int *age)
{
  (*age)++; // reference the pointer
  cout << "Yaay, celebrated your" << *age << "th birthday" << endl;
}