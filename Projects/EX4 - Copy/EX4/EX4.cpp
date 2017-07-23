#include                          "stdafx.h"
#include                             "Sin.h"
#include                        "OneOverX.h"
#include                       "Integrate.h"
#include                      "Polynomial.h"
#include                    "TestFunction.h"

//
// Title: CS116 EX4
//
// Description: .cpp for
// EX4.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

int _tmain(int argc, _TCHAR* argv[])
{

   enum                { STEPS = 10000000 };
   
   const OneOverX        g(1.0, 2.0, STEPS);
   const double ans1  =  ifs::integrateR(g); 
   printf  ("\nAnswer = %30.20f\n\n", ans1);

   const Polynomial     p(0.0, 10.0, STEPS);
   const double ans2  = ifs::integrateR(p); 
   printf  ("\nAnswer = %30.20f\n\n", ans2);

   const double pi    =          acos(-1.0);
   const double po2   =              pi/2.0;
   const TestFunction * const s = 
                   new Sin(0.0, po2, STEPS);
   const double ans3  = ifs::integrateR(*s);
   delete                                 s;
   printf("\nAnswer = %30.20f\n\n\n", ans3);

   return                                 0;

}

