using System;

namespace visualStudioCode
{
  class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine("This is the hello world section.");

      string fname, lname;
      Console.Write("Enter your first name: ");
      fname = Console.ReadLine();
      Console.Write("Enter your last name: ");
      lname = Console.ReadLine();
      Console.WriteLine("Your full name is " + fname + " " + lname);

    }
  }
}
