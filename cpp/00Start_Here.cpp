#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

// COMPILE YO FILE:
// ```bash/cmd
//  g++ your_program.cpp -o program_name
// ```

using namespace std; // using namespace standard

int i_am_a_global_var = 0;
const double PI = 3.141; // const constant and double for decimal

int main(int argc, char **argv)
{
  // WITHOUT THE NAMESPACE
  // std::cout << "Hello World!"<< endl;
  // cout output info to console
  // << Stream insertion operator, puts string into cout to display on screen
  // endl ends the line and forces a write to console

  cout << "Hello World" << endl;

  bool married = true;
  char myGrade = 'A';
  short int smallNum = 10;
  float f1 = 1.11111111;
  float f2 = 1.11111111;
  double f3 = 1.11111111;
  double f4 = 1.11111111;

  printf("Sum = %.7f\n", (f1 + f2));

  auto whatAmI = true;

  cout << "int Byte: " << sizeof(int) << endl;

  return 0;
}

// int main0(int argc, char **argv)
// {
//   printf("%c %d %5d %.3f #s\n", 'A', 10, 5, 3.1234, "Hello");
//   return 0;
// }

int mainl(int argc, char **argv)
{

  string q1 = "enter a number: ";
  string num0, num1;
  cout << q1;
  cin >> num0;
  cout << "Enter another number: ";
  cin >> num1;
  int nNum0 = stoi(num0);
  int nNum1 = stoi(num1);
  printf("%d + %d =%d\n", nNum0, nNum1);

  return 0;
}