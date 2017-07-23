#ifndef                              OOH_INCL_H
#define                              OOH_INCL_H
#include "TestFunction.h"
//
// Title: CS116 EX4
//
// Description: .h for
// OneOverX.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

class OneOverX :              public TestFunction
{

public:

   inline const double f(const double x) const 
                                 { return 1.0/x;}

   //
   // Note there is
   // no default
   // constructor for
   // TestFunction so
   // it has to be
   // called.
   //
   OneOverX
   (
      const double lower, 
      const double upper, 
      const int    steps
   ) :  TestFunction(lower, upper, steps)      {}

};

#endif