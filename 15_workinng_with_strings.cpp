#include <iostream>
using namespace std;

int main()
{
  // you all must be boared with all integers operations in c++
  // now lets print our name and understand how string work

  // string -> it is an array of characters (but their is a catch)

  // 1. using double quotes and using for each loop (simple and easy)
  char name1[] = {"Biswajit"};
  for (char a : name1)
  {
    cout << a;
  }
  cout << endl;

  // 2. understanding how a string is stored inside the memory character by character
  char name2[] = {'B', 'i', 's', 'w', 'a', 'j', 'i', 't'}; // this is just an array of characters
  for (char a : name2)
  {
    cout << a;
  }
  cout << endl;

  // 3. understanding how a compiler knows that the character array or string has came to an end
  char name3[] = {'B', 'i', 's', 'w', 'a', 'j', 'i', 't', 0}; // after adding 0 or '\0' the array of characters becomes a string

  for (char a : name3)
  {
    cout << a;
  }
  cout << endl;

  // OR

  for (int i = 0; name3[i] != 0; i++) // when the will check for 0 in the element then it will stop
  {
    cout << name3[i];
  }
  cout << endl;

  // OR

  for (int i = 0; name3[i]; i++) // will run untill it reaches the end of the string
  {
    cout << name3[i];
  }
  cout << endl;

  // OR

  for (char *i = name3; *i; i++)
  {
    cout << *i;
  }
  cout << endl;

  // OR

  for (char *i = name3; *i != 0; i++)
  {
    cout << *i;
  }
  cout << "\n\t\vSimilarly You can use while loop and do while loop also if you want to !!\n"
       << endl;

  // Conclusion -> hence string is an array of characters which ends with a zero or '\0' as to terminate after once word is complete in C but in C++ string is more precise than C as we use string keyword rather than making character array
  return 0;
}