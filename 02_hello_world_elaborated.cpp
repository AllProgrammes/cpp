#include <iostream>
// so in my previous program I wrote cstdio and here I wrote iostream why ?
// because I am no longer using "puts" to print my statement
// here I am using "cout" to print my statement yeah bye bye "puts" as of now :)

using namespace std; // using this I am telling the compiler that whatever methods I am using it is coming from the this library/file
// if we dont use this namespace then we have to use std::cout or whatever comes in that scope

int main()
{
  cout << "Hello World" << endl; // so what is this endl ? endl ends the line and clears the buffer
  return 0;
}

// So why to use "cout" and not "puts" ?
/*
1. "puts" can only print statments as a plain text while "cout" can print number with specified precision

2. "cout" is type safe meaning it autimatically handles the output of different types correctly while "puts" only outputs string for example if we want to print a int type variable and write "cout"<<x; then "cout" will fetch x from memory and print it as an integer but in case of "puts" any variable will be converted into sttring and then will be printed on the screen SO WE CAN SAY COUT KEEPS THE ORIGINALITY OF DIFFERENT DATA TYPE

3. In "cout" we can chain multiple statements using << operator while in "puts" you need to call the fx each line of output

4. "cout" can output to various devices and files and sockets while "puts" is limited to outputting to the console only
*/