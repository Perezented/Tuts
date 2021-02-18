#include <iostream>
using namespace std;

// Object Oriented Programming
class Car
{
private:
  string Color;
  double Price;

protected:
  string Name;
  bool IsBroken;

public:
  Car(string name, string color, double price)
  {
    Name = name;
    Color = color;
    Price = price;
    IsBroken = false;
  }

  void getCarInfo()
  {
    cout << "Name: " << Name << endl;
    cout << "Color: " << Color << endl;
    cout << "Price: " << Price << endl;
    cout << "Broken: " << IsBroken << endl;
  }
  void crashCar()
  {
    cout << Name << " crashed" << endl;
    IsBroken = true;
  }
  void repairCar()
  {
    cout << Name << " repaired the car" << endl;
    IsBroken = false;
  }
  void move()
  {
    if (IsBroken)
      cout << Name << " is broken" << endl;
    else
      cout << Name << " is driving" << endl;
  }
};

// Inheritance
class FlyingCar : public Car
{
public:
  FlyingCar(string name, string color, double price) : Car(name, color, price)
  {
  }
  void move()
  {
    if (IsBroken)
      cout << Name << " is broken" << endl;
    else
      cout << Name << " is flying" << endl;
  }
};

// Polymorphism

class UnderWaterCar : public Car
{
public:
  UnderWaterCar(string name, string color, double price) : Car(name, color, price)
  {
  }
  void move()
  {
    if (IsBroken)
      cout << Name << " is broken" << endl;
    else
      cout << Name << " is diving" << endl;
  }
};

int main()
{
  Car ford("Ford", "red", 40000);
  // myCar.Name = "Ford";
  // myCar.Color = "Red";
  // myCar.Price = 40000;
  Car volvo("Toyota", "blue", 35000);

  // cout << "Name: " << myCar.Name << endl;
  // cout << "Color: " << myCar.Color << endl;
  // cout << "Price: " << myCar.Price << endl;
  ford.getCarInfo();
  volvo.getCarInfo();
  ford.move();
  ford.crashCar();
  ford.move();
  ford.repairCar();
  ford.move();

  cout << endl;
  FlyingCar flyingCar("Sky Wing", "black", 500000);
  UnderWaterCar underwaterCar("Sea Cruiser", "blue", 499999);
  flyingCar.move();
  flyingCar.getCarInfo();
  underwaterCar.move();
  underwaterCar.getCarInfo();
  cout << endl;

  // int variable = 5;
  // int *intPtr = &variable;
  Car *car1 = &flyingCar;
  Car *car2 = &underwaterCar;
  car1->crashCar();
  flyingCar.move();
  car1->repairCar();
  flyingCar.move();
}