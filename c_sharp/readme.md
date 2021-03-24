<!-- In terminal -->

# A quick start to using dotnet in vscode

### Console App

Starting a new console app in the terminal

```bash
dotnet new console
```

To get the program running

```bash
dotnet run
```

### Web App

Creates a new ASP.NET Core MVC project in the MvcMovie folder.

```bash
dotnet new mvc -o MvcMovie

# Loads the MvcMovie.csproj project file in Visual Studio Code.
code -r MvcMovie
```

## Running the app

Select Ctrl+F5 to run without the debugger.

Trust the HTTPS development certificate by running this command:

```bash
dotnet dev-certs https --trust
```

Launching the app without debugging by selecting Ctrl+F5 allows you to:

• Make code changes

• Save the file

• Quickly refresh the browser and see the code changes

• Model: manages the behavior and data
• View: manaages the display of data
• Controller: handles page events and navigation between pages

View:
HTML CSS code or similar

Model:
Data related
consists of classes/objects
uses sql
