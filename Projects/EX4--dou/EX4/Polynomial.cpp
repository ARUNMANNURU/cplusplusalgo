#include                "stdafx.h"
#include            "Polynomial.h"
//
// Title: CS116 EX4
//
// Description: .cpp for
// Polynomial.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//


const double 
   Polynomial::f(const double x) 
                             const
{ 
   const static double a  =   2.0;
   const static double b  =   3.0;
   const static double c  =   4.0;
   const double        xs = x * x;
   const double ans = 
               a * xs + b * x + c;

   return                     ans;
}