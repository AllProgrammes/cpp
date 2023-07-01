#include <iostream>
using namespace std;

int main()
{
  // so what if you wanna run your code more than one time will you write print statement again and again ? No right
  // so we can do that with the help of loops

  /*
  so loops are of 3 types:-

  1. While Loop
                while (checks for condition if true then below code will be excuted else will be terminated or not start)
                {
                  your code
                }

  2. Do while loop (mostly used to code different kinds of sensors)

                do
                {
                  your code will run first then condition will be checked unlike while while loop which checks for condition and then execute the block of code
                }
                while (condition)
  3. For loop

                for (start or initialization; condition; iteration)
                {
                  code
                }

  Note : each one has its own use cases none are useless */

  // while loop
  int sheru = 10;
  while (sheru == 10)
  {
    puts("I will run till infinity cuz my condition will never become false");
  }

  // do while loop
  do
  {
    puts("I will print myself as I will run at least once and then check for the condition");
  } while (sheru > 10);

  // for loop
  for (int i = 0; i < sheru; i++)
  {
    puts("I will print myself 10 times when i will be 0 then for 1 as I did i++(which means i=i+1) and will go till untill i becomes 10 and the condition becomes false");
  }
  // Note : for loop can run without interation also
  return 0;
}