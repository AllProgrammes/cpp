#include <iostream>
using namespace std;
// What is addressing ?
// It is referencing to the the actual address unlike  pointer which was just pointing to the address
int main()
{

  int panda = 6; // declaring a variable of int type and storing 6 into it

  int &reference = panda;    // "reference" will now work same as panda
  reference = 10;            // this is directly affecting panda as the reference is referencing to the address of that variable
  cout << reference << endl; // output will be 10
  cout << panda << endl;     // output will be 10
  return 0;
}

// This may look a little confusing to you after coming from my previous program but if you run this code by breaking into into few steps you can understand it better
// HAPPY REVISING