#include <iostream>
using namespace std;

int main()
{
  int tax = 0; // just a integer initialization
  while (true) // to make my loop run till infinity untill somethiing stops it "yes you guesed it right an external INVINSIBLE POWER"
  {
    if (tax > 10) // after this condtion the program enters this loop and then prints the statement which is mentioned in the puts statement and then it will come out of the loop or say the loop will be breaked by the break statement
    {
      puts("I dont have money !!\v I dont have any income!!\vI dont have any money !!");
      break; // this the that INVINSIBLE POWER that I was talking about
    }
    puts("I am a sincere tax payer !!");
    tax++; // incrementing tax so that my while loop will be breaked by the "break" statement
  }

  for (int i = -5; i < 5; i++)
  {
    if (i < 0)
    {
      continue;                    // after the program encounters this continue statement the program will skips everything below it and go for next iteration
      puts("I am Mr Negetive !!"); // this will never get executed
    }

    puts("I am Mr Positive !!");
  }

  return 0;
}