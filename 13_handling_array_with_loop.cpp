#include <iostream>
using namespace std;

int main()
{
  string names[5]; // made a array of 5 strings which will take names of 5 persons

  // Taking input
  for (int i = 0; i < 5; i++)
  {
    cout << "Enter the name of person " << i + 1 << " : ";
    cin >> names[i]; // each time your enter name it will be stored in the next element
  }

  // Printing the output (in this case its names)
  for (int i = 0; i < 5; i++)
  {
    cout << "Name of person " << i + 1 << " is : " << names[i] << endl;
  }
  // Using while loop
  int i = 0;
  while (i < 5)
  {
    cout << "Name of person " << i + 1 << " is : " << names[i] << endl;
    i++;
  }

  // using do while
  int y = 0;
  do
  {
    cout << "Name of person " << y + 1 << " is : " << names[y] << endl;
    y++; // this is nothing but y = y + 1 in short form
  } while (y < 5);

  return 0;
}