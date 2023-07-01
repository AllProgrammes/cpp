#include <iostream>
using namespace std;

int main()
{
  // okay so what if you have a binary or hexadecimal value
  int fun = 22;
  cout << "I am " << fun << endl; // no doubt it will print 35

  int hex = 0x16;                 //    just write 0x followed by the hexadecimal value
  cout << "I am " << hex << endl; // this will also print 22 as hexadecimal value of 22 is 16

  int bin = 0b00010110;           //    just write 0b followed by the binary value
  cout << "I am " << bin << endl; // this will also print 22 as binary value of 22 is 00010110
  return 0;
}