#include "TestFunction.h"
#include          <cmath>
//
// Title: CS116 EX4
//
// Description: .h for
// Sin.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

class Sin : public TestFunction
{

public:

   inline const double f(const double x) const 
                                       { return sin(x); }

   //
   // Note there is
   // no default
   // constructor for
   // TestFunction so
   // it has to be
   // called.
   //
   Sin
   (
      const double lower, 
      const double upper, 
      const double steps
   ) :         TestFunction(lower, upper, steps)       {}


};