#include <iostream>
#include <string>
using namespace std;
int main()
{
  std::cout << "Hey there computer screen!\n";
  std::cout << "Welcome to the cpp start file 2\n";

  const int birthYear = 95;
  int age = 25;
  float weight = 156.5;
  double balance = 123456.78;
  char gender = 'm';

  bool isTodayToday = true;
  string username = "Perez";

  string colors[10] = {"red",
                       "green",
                       "pink",
                       "blue",
                       "black"};

  cout << colors[0];
  cin >> colors[0];
  cout << colors[0];
  colors[1] = "grey";

  // short int, 2 bytes, -32,768 to 32,767
  // unsigned short int, 2 bytes, 0 to 65,535
  // unsigned int, 4 bytes, 0 to 4,294,967,295
  // int, 4 bytes, -2,147,483,648 to 2,147,483,647
  // long int, 8 bytes, -2,147,483,648 to 2,147,483,647
  // unsigned long int, 8 bytes, 0 to 4,294,967,295
  // long long int, 8 bytes, -(2^63) to (2^63)-1
  // unsigned long long int, 8 bytes, 0 to 18,446,744,073,709,551,615
  // signed char, 1 bytes, -128 to 127
  // unsigned char, 1 bytes, 0 to 255
  // float, 4 bytes, ~7 digits
  // double, 8 bytes, ~15 digits
  // long double, 12 bytes,
  // wchar_t, 2 or 4 bytes, 1 wide character

  system("pause>0");
}