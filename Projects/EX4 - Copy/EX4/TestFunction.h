#ifndef                                    TESTFN_INCL_H
#define                                    TESTFN_INCL_H
//
// Title: CS116 EX4
//
// Description: .h for
// TestFunction.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

//
// Base class
// for 
// the algorithms
// that return
// f(x)
// at a 
// point, x.
//
class TestFunction
{

   //
   // Lower and
   // upper bounds
   // (defines
   // the valid
   // domain for
   // f(x).
   //
   const double                                   lower;
   const double                                   upper;
   const double                                   steps;

protected:

   TestFunction
      (const double l, const double u, const double s) : 
                         lower(l), upper(u), steps(s) {}

public:
   //
   // This method
   // MUST be 
   // overridden.
   //
   virtual const double f(const double x)     const = 0;

   //
   // These methods
   // MAY be 
   // overridden.
   //
   virtual const double getLower() const {return lower;}
   virtual const double getUpper() const {return upper;}
   virtual const double getSteps() const {return steps;}

   //
   // Always declare
   // a base class
   // destructor 
   // virtual.
   //
   virtual                            ~TestFunction(){};

};

#endif