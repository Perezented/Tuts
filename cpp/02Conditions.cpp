#include <iostream>
using namespace std;

int main()
{
  bool isTodaySunny = true;
  bool isTodayWeekendDay = false;
  // if (isTodaySunny && isTodayWeekendDay)
  // {
  //   cout << "Got to the park" << endl;
  // }
  // else if (isTodayWeekendDay)
  // {
  //   cout << "Go to the park, but take an umbrella" << endl;
  // }
  // else
  // {
  //   cout << "Go to work" << endl;
  // }

  // isTodaySunny ? cout << "Got to the park" << endl : cout << "Take an umbrella" << endl;

  if (isTodayWeekendDay)
  {
    if (isTodaySunny)
      cout << "go to the park" << endl;
    else
      cout << "Go to the park, but take an umbrella" << endl;
  }
  else
  {
    cout << "Go to work" << endl;
  }
}