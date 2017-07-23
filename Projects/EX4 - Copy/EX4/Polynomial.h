#include "TestFunction.h"
//
// Title: CS116 EX4
//
// Description: .h for
// Polynomial.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

class Polynomial :       public TestFunction
{

public:

   const double f(const double x)     const;

   //
   // Note there is
   // no default
   // constructor for
   // TestFunction so
   // it has to be
   // called.
   //
   Polynomial 
   (
      const double lower, 
      const double upper, 
      const double steps
   ) :  TestFunction(lower, upper, steps) {}

};