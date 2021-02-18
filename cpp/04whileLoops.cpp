#include <iostream>
using namespace std;

int main()
{
  // If the while loop starts as false, nothing ever runs
  cout << "While: \n";
  int counter = 1;
  while (counter <= 10)
  {
    cout << counter << endl;
    counter++;
  }
  // If a do while loop is false, it still runs atleast once
  cout << "Do-While: \n";
  int doWhileCounter = 1;
  do
  {
    cout << doWhileCounter << endl;
    doWhileCounter++;
  } while (doWhileCounter <= 10);

  string animals[5] = {"cat", "dog", "cow", "goat", "bee"};

  for (int i = 0; i < sizeof(animals) - 1; i++)
  {
    cout << animals[i] << endl;
  }

  system("pause<0");
}