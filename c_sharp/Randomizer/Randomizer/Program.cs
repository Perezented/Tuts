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
      GetAppInfo();
      GetDate();
      ColorReset();
      NameSetter();
      GameLoop();
    }

    static void GetAppInfo()
    {
      string appName = "Number Randomizer";
      string appVersion = "1.0.0";
      string appAuthor = "Perez";
      //Change text color
      Console.ForegroundColor = ConsoleColor.Green;
      // Composite formatting
      Console.WriteLine("{0}: Version {1} by {2}", appName, appVersion, appAuthor);
    }


    static void GetDate()
    {
      Console.ForegroundColor = ConsoleColor.Cyan;
      //Defining Date
      var date = DateTime.Now;
      Console.WriteLine(date);
    }

    static void ColorReset()
    {
      Console.ForegroundColor = ConsoleColor.Red;
      Console.WriteLine("Color just got reset");
      Console.ResetColor();

    }
    static void GameLoop()
    {

      while (true)
      {
        // Create a new random object
        Random random = new Random();

        int correctNumber = random.Next(1, 10);

        // Init guess var
        int guess = 0;

        // Ask user for number
        Console.WriteLine("Guess a number between 1 and 10.");

        // While the guess is not correct
        while (guess != correctNumber)
        {
          // Get users input
          string input = Console.ReadLine();

          // Make sure input is a number
          if (!int.TryParse(input, out guess))
          {
            Console.ForegroundColor = ConsoleColor.Yellow;
            Console.WriteLine("Please enter an actual number:");
            Console.ResetColor();
            continue;
          }

          // Cast to int and put into guess var
          guess = Int32.Parse(input);
          // Match guess to correct number
          if (guess != correctNumber)
          {
            Console.ForegroundColor = ConsoleColor.Red;
            Console.WriteLine("Number is incorrect, please guess again");
            Console.ResetColor();

          }
        }

        // Correct number guessed
        Console.ForegroundColor = ConsoleColor.Green;
        Console.WriteLine("Number is CORRECT!!!!!");
        Console.ResetColor();


        Console.WriteLine("Play Again? [Y or N]");

        string answer = Console.ReadLine().ToUpper();

        if (answer == "Y")
        {
          continue;
        }
        else if (answer == "N")
        {
          return;
        }
        else
        {
          Console.WriteLine("Invalid input, Either 'Y' or 'N'");
          return;
        }

      }
    }

    static void NameSetter()
    {
      // Ask users name
      Console.WriteLine("What is your name?");

      // Get user's input
      string inputName = Console.ReadLine();

      Console.WriteLine("Hello {0}, let's play a game!", inputName);

      // Init correct number
      // int correctNumber = 7;
    }



    static void Basics()
    {
      //Basics
      string name = "Name Here";
      Console.WriteLine("Hello World!");
      Console.WriteLine("Hello there " + name);
      Console.WriteLine("DOTNET RUN!");
      Console.WriteLine("Hello World!");
      string my_name = "Name goes here";
      int some_number = 117;

      //Wait for user input
      // Console.WriteLine("Press any key to continue");
      // Console.Read();

      Console.WriteLine(my_name + ' ' + some_number);

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
    }
  }
}
