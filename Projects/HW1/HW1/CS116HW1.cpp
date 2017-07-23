#include                     "stdafx.h"
#include                      <cstdlib>
#include                       "Quad.h"
//
// Title: CS116HW1.cpp
//
// Description: cpp 
// file calls
// the Quadratic
// equation solver.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

//
// Local 
// function
// to output
// values.
//
void printIn
(
   const double                      a,
   const double                      b,
   const double                      c,
   const double                    eps
)
{
   printf                   ("\na = ");
   printf                   (" %f", a);
   printf                    (" b = ");
   printf                   (" %f", b);
   printf                    (" c = ");
   printf                   (" %f", c);
   printf                  (" eps = ");
   printf                 (" %f", eps);
   printf                     ("\n\n");
}


int main       (int argc, char* argv[])
{

   //
   // Read input
   // values through
   // argv and 
   // display.
   //
   const double a    =   atof(argv[1]);
   const double b    =   atof(argv[2]);
   const double c    =   atof(argv[3]);
   const double eps  =   atof(argv[4]);
   printIn                 (a,b,c,eps);

   //
   // Invoke the 
   // function to 
   // solve the
   // quadratic 
   // equation.
   //
   const RSType rs  = roots(a,b,c,eps);

   //
   // Print the 
   // result and
   // free the 
   // memory.
   //
   printit                        (rs);
   freeit                         (rs);

   return                            0;
}