#include <iostream>
using namespace std;
int main()
{
  string first_name, last_name;

  cout << "Enter your first name: ";
  cin >> first_name;
  cout << "Enter your last name: ";
  cin >> last_name;

  cout << "Your full name is " << first_name + " " + last_name + "\n";
  system("pause");
  return 0;
}