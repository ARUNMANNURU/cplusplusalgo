#include                  "stdafx.h"
#include                 "Surgery.h"
#include                "Pharmacy.h"
#include                "HControl.h"
#include               "SurgTypes.h"
#include          "PatientAccount.h"
//
// Title: CS116 HW1
//
// Main unit for
// HW2.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

int                         _tmain()
{

   //
   // Instantiate
   // Objects.
   //
   PatientAccount                pA; 
   Pharmacy                   p(pA);
   services::Surgery          s(pA);
   HControl              hc(s,p,pA);

   //
   // Invoke
   // control  
   // object to
   // process 
   // inputs.
   //
   hc.pInputs                    ();

   return                         0;

}


