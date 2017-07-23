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
    str[len] = '\0';
}

//*************************************************
// Copy constructor.                              *
//*************************************************
MyString::MyString(const MyString &right)
{
    str = new char[right.len + 1];
    memcpy(str, right.str, right.len);
    len = right.len;
    str[len] = '\0';
}

//************************************************
// Overloaded = operator.                        *
//************************************************
MyString MyString::operator=(MyString right)
{
    if (len != 0) delete [] str;
    str = new char[right.len + 1];
    memcpy(str, right.str, right.len);
    len = right.len;
    str[len] = '\0';
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
    const int lp1 = right.len + 1;
    char * temp = str;
    str = new char[len + lp1];
    memcpy(str, temp, len);
    memcpy(&str[len], right.str, lp1);
    if (len) delete [] temp;
    len += right.len;
    return *this;
}

//*********************************************************
// Overloaded == operator.                                *
//*********************************************************
bool MyString::operator==(MyString right)
{
    return strcmp(str, right.str) == 0;
}

//*********************************************************
// Overloaded != operator.                                *
//*********************************************************
bool MyString::operator!=(MyString right)
{
    return strcmp(str, right.str) != 0;
}

//********************************************************
// Overloaded > operator.                                *
//********************************************************
bool MyString::operator>(MyString right)
{
    return (strcmp(str, right.str) > 0);
}

//***********************************************************
// Overloaded < operator.                                   *
//***********************************************************
bool MyString::operator<(MyString right)
{
    return (strcmp(str, right.str) < 0);
}

//*****************************************************
// Overloaded >= operator.                            *
//*****************************************************
bool MyString::operator>=(MyString right)
{
    return (strcmp(str, right.str) >= 0);
}

//**********************************************************
// Overloaded <= operator.                                 *
//**********************************************************
bool MyString::operator<=(MyString right)
{
   return  (strcmp(str, right.str) <= 0);
}

//*************************************************
// Overloaded stream insertion operator (<<).     *
//*************************************************
ostream &operator<<(ostream &strm, MyString& obj)
{
    strm << obj.str;
    return strm;
}
//*************************************************
// Overloaded stream extraction operator (>>).    *
//*************************************************
istream &operator>>(istream &strm, MyString& obj)
{
   // Read the string 
   char buffer[256];   
   strm.getline(buffer, 256);
   // Invoke the convert constructor and overloaded assignment
   obj = buffer;
   return strm;
}
