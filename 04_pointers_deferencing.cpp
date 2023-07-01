#include <iostream>
using namespace std;
// What is a pointer ?
//  A pointer is nothing but a reference to the address of any variable/element in the program
// like I am Biswajit but is this my address same ? No !! But if someone goes to my building and open the door of   1-B he/she will find me so what is unique ? My address right !! so a pointer is storing the address of the variable you have made
int main()
{
  int real = 300, fake;
  fake = real; // by this way we can assign values to any variable

  int *ptr;    // by this way we created a pointer of int type
  ptr = &real; // "&" is called address operator which fetches the address of the given variable name attached to it and here we are storing the address of "real" in to the pointer "ptr"

  // A quick check
  cout << "Address of the variable real using address operator is " << &real << endl;
  cout << "Address of the variable real using pointer is " << ptr << endl;

  // Ok so what we want to go backwards ? I mean what if you know a address but you don't know who lives there so can we know that ? Answer is a big YES and the process is called 'derefencing'
  cout << "Okay so one fine day !! I went to the address " << ptr << " and pressed the door bell and " << *ptr << " came out scraching his head" << endl;
  return 0;
}

// Pretty easy right :)