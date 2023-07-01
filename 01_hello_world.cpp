#include <cstdio> ///this is a header file which has meaning of whatever we write or say it is like a book which is refered by the compiler to see what is the meaning of the functions we use the way we write the semi colons etc

int main() // int main is the function from where the code execution starts , yeah if we write it at the last postion of the program hehe
{
  // cout << "Hello World" << endl; <- This statement will not work and will throw an error saying cout is in iostream and you have included cstdio only
  puts("hello world"); // however this code will work as "puts" is defined in cstdio library
  return 0;
}