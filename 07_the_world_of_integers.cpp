#include <iostream>
using namespace std;

int main()
{
  // Note: 1 byte is 8 bits
  cout << "Size of 'short int' in this system is " << sizeof(short int) * 8 << " bits." << endl;
  cout << "Size of 'int' in this system is " << sizeof(int) * 8 << " bits." << endl;
  cout << "Size of 'long int' in this system is " << sizeof(long int) * 8 << " bits." << endl;
  cout << "Size of 'long long int' in this system is " << sizeof(long long int) * 8 << " bits." << endl;
  //
  // So you must be thinking that why I have written "on my system"
  // Ans : I have to write that because the size of these things depends on the opearting system you are using

  // Why default size of integer is 4 bits ?
  // Ans : Because the natural data-size for an ARM processor is 32-bits, it is much more preferable to use int as a variable than short; the processor may actually have to use more instructions to do a calculation on a short than an int!

  //  So is thier a way to make it uniform accross all the platforms ?
  //  Answer is YESSS -> see my next program :)
  return 0;
}