#include <iostream>
/*
What are funtions ?

It is a block of code which will get executed multiple times whenever get's 'called'. Using functions saves time and space by not writting the same block of code again and again.

syntax :

return_type name_of_the_function (paramters if any){
   block of code
   return returning_value;
}
*/

// below are some functions with different arrangements to make your concepts clear
void greet()
{
   puts("Good Morning !!\nI am funtion which donot return anything(void means I will return nothing) I just excute block of code and that's it");
}

int number()
{
   return 34; // this is  a funciton which return's a integer as I have promised the function at line number 23 that I will make this function return an integer value
}

int sum(int a, int b)
{
   return (a + b);

   /*let's breakdown :

   int -> it is a function which returns an integer value
   sum -> name of the function (meaningfull name)
   (int a, int b) -> these are the paramters which the funtion accepts when it is being used/called somewhere
   return (a+b) -> if we do a+b then it will generate a integer value isn't it ? yes so our promise to this function what I will make it return a integer value has been fullfilled again
   */
}

// so what if I break the rules and don't return or pass the correct parameters what I have promised ? don't worry your code will not get compiled hehe !! Enjoy terminal getting spammed with 69 errors
int main()
{
   greet();  // this is functions call
   number(); // this function will not do anything as it don't print something but it returns a int value which we can store somewhere by making a integer variable or we can print the return value directly using any output command like printf, cout etc
   std::cout << number() << std::endl;

   sum(4, 5); // this function needs 2 integer values for which it will add and return the sum and same as above we can do like 'int result = sum(value1,value2)' or  we can print like we have done in line 46
   return 0;
}