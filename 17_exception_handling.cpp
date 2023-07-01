#include <iostream>
#include <string>
using namespace std;

// Imagine you want to make a program which asked for an integer but the user gave it a string..and you don't want your program to crash so what you will do ? Their comes in the concept of expection handling
int main()
{
   string number_string;
   try
   {
      cout << "Enter your phone number : ";
      cin >> number_string;

      unsigned long long int mobile_number = stoull(number_string);
      /* stoull is used to convert string to unsigned long long int and have 2 expections

      1. invalid_argument : when it encounters something and fails to convert it to int
      2. out_of_range : when it fails to assign the converted int value to the variable cuz it's value maybe more than the capacity of a ull int*/

      // if the program don't encounter any error in conversion then this wiil be printed
      cout << "Your phone number " << mobile_number << " has been successfully registered with us !" << endl;
   }
   catch (invalid_argument)
   {
      cout << "Please don't enter anything other than your phone number !!" << endl;
   }
   catch (out_of_range)
   {
      cout << "Remove +91 or any prefix from your entered mobile number and try again !!" << endl;
   }
   catch (...)
   {
      // this block of code will be executed when the program encounters a exception which is not mentioned in above catch blocks.
      cout << "Something is really wrong !!" << endl;
   }
   return 0;
}