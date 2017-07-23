#ifndef MYSTRINGFS_H
#define MYSTRINGFS_H
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
class MyString;
namespace msh
{
   bool operator==(MyString, MyString);
   bool operator!=(MyString, MyString);
   bool operator>(MyString, MyString);
   bool operator<(MyString, MyString);
   bool operator>=(MyString, MyString);
   bool operator<=(MyString, MyString);
   ostream & operator<<(ostream &, MyString );
   istream & operator>>(istream &, MyString &);
}

#endif