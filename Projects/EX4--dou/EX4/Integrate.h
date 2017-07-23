#ifndef                     INTE_INCL_H
#define                     INTE_INCL_H
#include               "TestFunction.h"
//
// Title: CS116 EX4
//
// Description: .h for
// Integrate.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

//
// Place the
// integration 
// functions
// into their
// own 
// namespace.
//
class Integrate
{

   const TestFunction&              tF;

public:

   Integrate( const TestFunction& t) 
                             : tF(t) {}

   const double integrateR()     const;

};

#endif