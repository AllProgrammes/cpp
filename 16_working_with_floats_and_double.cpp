#include <iostream>
using namespace std;

/* We have always seen our teachers or seniors saying use float for more precision but is it actually the case ?

let's find it out
*/

int main()
{
   float test = 22.2;

   // so if this is true then let's check
   if (test == 22.2)
      cout << "Float is not a liar !!" << endl;
   else
      cout << "Float is a liar !!" << endl;

   // sadly you will end up landing in the else block because it's not what you see and get in your terminal that 22.2 which you see in your terminal is not 22.2 actually it's 22.200....1

   double temp = 22.2;
   if (temp == 22.2)
      cout << "Double is not a liar !!" << endl;
   else
      cout << "Double is a liar !!" << endl;
   // this is meet your expectations

   /*
   so why to use float ? my views upon this is .... I would use 'float' over 'double' if

   1. I am not needed to handle precise values in my program
   2. I don't wanna use extra space cuz both int and float use 4 bytes i.e 32 bits of my memory unlike double which takes 8 bytes i.e 64 bits*/

   return 0;
}