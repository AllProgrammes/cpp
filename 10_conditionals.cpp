#include <iostream>
using namespace std;

int main()
{
  int rating;
  cout << "Enter your rating you wanna give to this course between 1 to 5 : ";
  cin >> rating;

  /*
  so the syntax is :
                      if (condition)
                      {
                        your code
                      }

                      OR it can be like

                      if (condition 1)
                      {
                        your code
                      }
                      else if (condition 2)
                      {
                        your code
                      }

                      OR it can be also like

                      if (condition 1)
                      {
                        your code
                      }
                      else if (condition 2)
                      {
                        your code
                      }
                      else
                      {
                        your code which will be executed by default when all the above conditions will get false
                      }
  */

  if (rating == 5) // "==" is used to check for equality and just "=" is used for assgining
  {
    puts("Thanks for your positive feedback !!"); // condition 1
  }
  else if (rating == 4)
  {
    puts("Thanks for your positive feedback !! We will improve ourselves"); // condition 2
  }
  else
  {
    puts("We are very sorry !! How can we improve ? "); // the default part
  }

  // This feels lengthy to you ?
  // no problem C/C++ got you covered you back let's see

  rating > 0 ? puts("Thanks for feedback ") : puts("Are we that bad ? "); // we have done the if else part using "ternary operator"
  // condition ? "True Part " : "False Part";
  return 0;
}