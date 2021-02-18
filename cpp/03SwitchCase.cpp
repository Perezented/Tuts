#include <iostream>
using namespace std;

enum EyeColor
{
  Brown,
  Blue,
  Green,
  Gray,
  Other
};
int main()
{
  EyeColor eyeColor = Blue;

  switch (eyeColor)
  {
  case Brown:
    cout << "65% of people have Brown eyes";
    break;
  case Blue:
    cout << "10% of people have Blue eyes";
    break;
  case Green:
    cout << "4% of people have Green eyes";
    break;
  case Gray:
    cout << "1% of people have Gray eyes";
    break;
  case Other:
    cout << "20% of people have Other eyes";
    break;
  default:
    cout << "Not valid eye color";
  }
  system("pause>0");
}