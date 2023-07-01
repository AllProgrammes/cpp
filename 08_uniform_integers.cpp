#include <iostream>
#include <cstdint> //intN_t is a data type in the C programming language that represents a signed integer with a size of N bits. It is defined in the cstdint header file
using namespace std;

int main()
{
  cout << "Signed Integers" << endl;
  cout << "Size of 'signed short int' in this system is " << sizeof(int16_t) * 8 << " bits." << endl;     // range is -32,768 .. 32,767
  cout << "Size of 'signed int' in this system is " << sizeof(int32_t) * 8 << " bits." << endl;           // range is -2,147,483,648 .. 2,147,483,647
  cout << "Size of 'signed long long int' in this system is " << sizeof(int64_t) * 8 << " bits." << endl; // range is -9,223,372,036,854,775,808 .. 9,223,372,036,854,775,807

  cout << "\nUnsigned Integers" << endl;
  cout << "Size of 'unsigned short int' in this system is " << sizeof(uint16_t) * 8 << " bits." << endl;     // range is 0 .. 65,535
  cout << "Size of 'unsigned int' in this system is " << sizeof(uint32_t) * 8 << " bits." << endl;           // range is 0 .. 4,294,967,295
  cout << "Size of 'unsigned long long int' in this system is " << sizeof(uint64_t) * 8 << " bits." << endl; // range is 0 .. 18,446,744,073,709,551,615
  return 0;
}

/*
A "signed" integer type uses a sign bit (the leftmost bit) to represent negative numbers. The remaining bits represent the magnitude of the number. The sign bit is 0 for positive numbers and 1 for negative numbers. The range of a signed integer type is divided equally between positive and negative values, with zero in the middle. For example, a signed 8-bit integer type can represent values from -128 to 127.

An "unsigned" integer type does not use a sign bit to represent negative numbers. Instead, all bits are used to represent the magnitude of the number. This means that an unsigned integer type can represent only non-negative values, from 0 to a maximum value that depends on the number of bits used to represent the value. For example, an unsigned 8-bit integer type can represent values from 0 to 255.
*/