#include <iostream>
using namespace std;

int main()
{
  /*
    _Syntax_

        switch (expression)
        {
        case 1:
          code
          break;

        case 2:
          code
          break;

        default:
          break;
        }
  */
  int age;
  puts("\t\vWelcome to HOLY CROSS SCHOOOL admission portal\n\n");
  cout << "Enter the age of your child : ";
  cin >> age;

  switch (age) // what paarameter will the switch case use to check different values
  {
  case 4:                                             // if age will be 4 then this block of code will be executed and
    puts("Your ward can take addmission in NURSERY"); // you are free to write printf/cout/puts whatever you like
    break;
    // okay so what if we don't write break here ?
    // So, if we don't write break here the default section will also be executed
  case 5:
    puts("Your ward cannot take addmission in NURSERY but can apply for LKG which wil be starting soon");
    break;

  default:
    puts("Sorry currently addmission is open for NURSERY class only !!\nWe will let you know once we start taking admission for other classes");
    break;
  }
  return 0;
}