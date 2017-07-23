

#include "stdafx.h"
#include "mystring.h"

namespace msh
{

   //*********************************************************
   // Overloaded == operator.                                *
   //*********************************************************
   bool operator==(MyString left, MyString right)
   {
       return strcmp(left.str, right.str) == 0;
   }


   //*********************************************************
   // Overloaded != operator.                                *
   //*********************************************************
   bool operator!=(MyString left, MyString right)
   {
       return strcmp(left.str, right.str) != 0;
   }

   //********************************************************
   // Overloaded > operator.                                *
   //********************************************************
   bool operator>(MyString left, MyString right)
   {
       return (strcmp(left.str, right.str) > 0);
   }

   //***********************************************************
   // Overloaded < operator.                                   *
   //***********************************************************
   bool operator<(MyString left, MyString right)
   {
       return (strcmp(left.str, right.str) < 0);
   }

   //*****************************************************
   // Overloaded >= operator.                            *
   //*****************************************************
   bool operator>=(MyString left, MyString right)
   {
       return (strcmp(left.str, right.str) >= 0);
   }

   //**********************************************************
   // Overloaded <= operator.                                 *
   //**********************************************************
   bool operator<=(MyString left, MyString right)
   {
      return  (strcmp(left.str, right.str) <= 0);
   }

   //*************************************************
   // Overloaded stream insertion operator (<<).     *
   //*************************************************
   ostream &operator<<(ostream &strm, MyString obj)
   {
       strm << obj.str;
       return strm;
   }

   //*************************************************
   // Overloaded stream extraction operator (>>).    *
   //*************************************************
   istream &operator>>(istream &strm, MyString &obj)
   {
      // Read the string 
      char buffer[256];   
      strm.getline(buffer, 256);
      // Invoke the convert constructor and overloaded assignment
      obj = buffer;
      return strm;
   }

}
