#include <iostream>
using namespace std;

/*
as we saw in our previous program the different types of declaring a function
here we will see how to pass parameters to a functions

so basically there are 3 ways to call a function in c/cpp

1. call by value : here we pass the copy of the parameters and not the actual parameters like we send a pdf to somebody rather than giving our actual notes

2. call by reference : here we pass the memory address of the argument and any changes you do will be done directly done to the actual variable and will remain permanent (swap a number using functions hehe)

3. call by pointer :  here it is very similar to 'call by reference' it's just we are passing a pointer*/

// type 1
void swap_1(int a, int b)
{
   int temp = a;
   a = b;
   b = temp;
}

// type 2
void swap_2(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}

// type 3
void swap_3(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}
int main()
{
   int a = 10, b = 5;

   swap_1(a, b);
   cout << "Value of a and b after running swap_1 is " << a << " and " << b << endl; // no change hehe

   swap_2(a, b);
   cout << "Value of a and b after running swap_2 is " << a << " and " << b << endl; // changed ? idk u check and tell

   swap_3(&a, &b);
   cout << "Value of a and b after running swap_3 is " << a << " and " << b << endl; // now changed ? idk dude !! use brain to find it or hands to run the code
   return 0;
}