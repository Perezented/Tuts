#include <iostream>
using namespace std;

float sum(float a, float b); // function declaration

void introduceMe(string name, int age = 0);

int main()
{

  cout << sum(2.5, 4.6) << endl;
  cout << sum(3.6, 3.6) << endl;
  cout << sum(3, 2) << endl;
  introduceMe("Mike", 25);

  system("pause>0");
}

float sum(float a, float b) // definition
{
  return a + b;
}

void introduceMe(string name, int age)
{
  cout << "My name is " << name << endl;
  cout << "I am " << age << " years old" << endl;
}