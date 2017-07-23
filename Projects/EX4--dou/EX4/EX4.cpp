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
   
   //
   // Integrate 1/x
   // from 1 to 2.
   //
   const OneOverX        g(1.0, 2.0, STEPS);
   const Integrate                    i1(g);
   const double ans1  =     i1.integrateR(); 
   printf  ("\nAnswer = %30.20f\n\n", ans1);

   //
   // Integrate 
   // polynomial 
   // from 0 to 10.
   //
   const Polynomial     p(0.0, 10.0, STEPS);
   const Integrate                    i2(p);
   const double ans2  =     i2.integrateR(); 
   printf  ("\nAnswer = %30.20f\n\n", ans2);

   //
   // Integrate
   // sin from 0
   // to pi/2.
   // Use pointers 
   // this time.
   //
   const double pi    =          acos(-1.0);
   const double po2   =              pi/2.0;
   const TestFunction* const s = 
                   new Sin(0.0, po2, STEPS);
   const Integrate * const i3 = 
                          new Integrate(*s);
   const double ans3  =    i3->integrateR();
   delete                                 s;
   delete                                i3;
   printf("\nAnswer = %30.20f\n\n\n", ans3);

   return                                 0;

}

