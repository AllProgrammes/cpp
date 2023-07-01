#include <iostream>
using namespace std;

int main()
{
  // okay so every loop is a bit lengthy and have to be assgined the start and ending of the array
  // here comes FOR EACH LOOP which does your job and is made to itterate arrays and many more itteratables

  int array[5] = {1, 2, 3, 4, 5}; // made an array and initialized with elements

  /* Syntax:
            for (variable name in which you wanna store the data of each element : array name)
            {
              code;
            }
  */

  for (int i : array)
  {
    cout << i << endl;
  }

  return 0;
}