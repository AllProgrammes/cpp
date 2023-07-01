#include <iostream>
using namespace std;

// What is an array ?
// An array is a contiguous memory location
int main()
{
  int marks[5]; // by writing this we created 5 int memory locations which now has garbage values
  // we can also assign values at the time of initilization by writing int marks[5]={1,2,3,4,5}

  marks[0] = 69;            // why marks[0] ? because we have 5 empty memory location whose index starts with 0 and goes to 4
  cout << marks[0] << endl; // no surprise we will get 69

  // okay so lets see how to work with pointers
  int *ptr = marks;
  cout << *ptr << endl; // output will be 69! why? because the pointer when firstly gets initialized with the address of the first element i.e index 0

  // so if we do ptr++ then it will start pointing to next element lemme show you
  ptr++;
  cout << marks[1] << endl; // output depends on your machine
  *ptr = 45;
  cout << marks[1] << endl; // output will be 45
  return 0;
}

// Revise and practice more and more to master this