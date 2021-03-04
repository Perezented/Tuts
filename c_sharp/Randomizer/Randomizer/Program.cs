using System;


// Container namespace called Randomizer
namespace Randomizer
{
  // Main Class
  class Program
  {
    // Entry Point Method
    static void Main(string[] args)
    {
      //Basics
      Console.WriteLine("Hello World!");
      string my_name = "Name goes here";
      int some_number = 117;

      Console.WriteLine(myName + ' ' + some_number)

            //Updating a var
      string aFriend = "Friend1";
      Console.WriteLine(aFriend);
      aFriend = "UpdatedFriend1";

      // String Interpolation
      Console.WriteLine("Hello " + aFriend);
      Console.WriteLine($"Hello {aFriend}");
      // More String Interpolation, other fashions
      string firstFriend = "Friend2";
      string secondFriend = "Friend3";
      Console.WriteLine($"My friends are {firstFriend} and {secondFriend}");

      Console.WriteLine($"The name {firstFriend} has {firstFriend.Length} letters.");
      Console.WriteLine($"The name {secondFriend} has {secondFriend.Length} letters.");

      string appName = 'Number Randomizer';
      string appVersion = "1.0.0";
      string appAuthor = "Perez";

      //Change text color
      Console.ForegroundColor = ConsoleColor.Cyan;
      // Composite formatting
      Console.WriteLine("{0}: Version {1} by {2}", appName, appVersion, appAuthor);

      //Wait for user input
      Console.WriteLine("Press any key to continue");
      Console.ReadKey();

      //Defining Date
      var date = DateTime.Now;
      Console.WriteLine(date)
        }
  }
}
