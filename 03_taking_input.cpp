#include <iostream>
#include <string> //included to use getline function
using namespace std;

int main()
{
  int number; // int here means datatypes and the word "number" is a variable name
  string name;
  cout << "Enter your name : ";
  // cin >> name;
  getline(cin, name);
  // okay so why I used getline instead of cin life was so peacefull
  // no no no I am not here to take back your peace from your life but I want to add more peace to your life
  // how ? so by using getline you can now take a whole sentence as a input no matter how many spaces you give in between but in "cin" you can't take string with spaces between them "Why not give it a try yourself"

  cout << "Enter your lucky number : ";
  cin >> number;
  cout << "Hi !! " << name << ","
       << "\vYour number is " << number << "." << endl;
  return 0;
}

/*
Rules of naming a variable :-

1. if we make 2 variable like taruntim and tarunTim then they both will be treated as different variables because C++ is very case sensitive

2. Numbers in the variable name is allowed but any name should not start with number like 9tarun. It can be like tarun9 yes this is allowed

3. Underscore are allowed but their is a catch I'll tell about in my upcoming programs

4. You can't use reserved keywords like friend,time,float etc as a variable name

5. Yes you can use variable name of your native language hindi,chinese etc as it is now supported the new update of c++ 2020

6. And don't go naming variables beyond 31 characters because "Why to make compiler suffer with such big names" better use comments beside the variable names if you wanna be very clear with your name
*/