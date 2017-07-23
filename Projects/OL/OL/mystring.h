#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>  // For string library functions
#include <cstdlib>  // For exit() function
#include "mystringfs.h"

using namespace std;
using namespace msh;

class MyString {
private:
    char *str;
    int len;
public:
    // Constructors
    MyString() { str = ""; len = 0; }
    MyString(char *);
    MyString(const MyString &);

    // Destructor
    ~MyString() { if (len != 0) delete [] str; }

    // Various member functions and operators
    int length() { return len; }
    char *data() { return str; };
    MyString operator+=(MyString );
    MyString operator=(MyString );

    // Various overloaded operators

    friend bool msh::operator==(MyString, MyString);
    friend bool msh::operator!=(MyString, MyString);
    friend bool msh::operator>(MyString, MyString);
    friend bool msh::operator<(MyString, MyString);
    friend bool msh::operator>=(MyString, MyString);
    friend bool msh::operator<=(MyString, MyString);
    friend std::ostream & msh::operator<<(std::ostream &, MyString );
    friend istream & operator>>(istream &, MyString &);
 
};
#endif