

#include "stdafx.h"
#include "mystring.h"

//**************************************************
// Constructor to initialize the str member        *
// with a C-string constant.                         *
//**************************************************
MyString::MyString(char *sptr)
{
    len = strlen(sptr);
    str = new char[len + 1];
    memcpy(str, sptr, len);
    str[len] = 0;
}

//*************************************************
// Copy constructor.                              *
//*************************************************
MyString::MyString(const MyString &right)
{
    str = new char[right.len + 1];
    memcpy(str, right.str, right.len);
    len = right.len;
    str[len] = 0;
}

//************************************************
// Overloaded = operator.                        *
//************************************************
MyString MyString::operator=(MyString right)
{
    if (len) delete [] str;
    str = new char[right.len + 1];
    memcpy(str, right.str, right.len);
    len = right.len;
    str[len] = 0;
    return *this;
}

//**************************************************
// Overloaded += operator.                         *
// Concatenates the str member of right to the     *
// str member of the calling object.               *
// Returns the calling object.                     *
//**************************************************
MyString MyString::operator+=(MyString right)
{
    char *temp = str;
    str = new char[len + right.len + 1];
    memcpy(str, temp, len);
    memcpy(&str[len], right.str, right.len);
    if (len) delete [] temp;
    len += right.len;
    str[len] = 0;
    return *this;
}

