#include    "stdafx.h"
#include "Integrate.h"
//
// Title: CS116 EX4
//
// Description: .cpp for
// Integrate.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

const double Integrate::integrateR() 
                                 const
{

   //
   // Integrate
   // using the 
   // rectangle 
   // rule.
   //
   const double steps =  tF.getSteps();
   const double lower =  tF.getLower();
   const double upper =  tF.getUpper();
   const double range =    upper-lower;
   const double inc   =    range/steps;

   double   sum       =            0.0;
   double   x         =          lower;

   //
   // Begin at
   // lower bound.
   // Sum over
   // the domain
   // at equally
   // spaced
   // increments.
   //
   for (int i=0; i < steps; ++i) 
   { 
      sum           +=         tF.f(x);
      x              = lower + i * inc;
   }

   //
   // Divide by
   // the number 
   // of steps
   // and multiply
   // by range.
   // Return
   // the answer.
   //
   const double ans   =  
                  sum / steps * range;
   return                         ans;

}

