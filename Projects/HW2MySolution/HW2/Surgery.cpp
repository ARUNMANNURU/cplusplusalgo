#include                  "stdafx.h"
#include                 "Surgery.h"
#include          "PatientAccount.h"
//
// Title: CS116 HW1
//
// Description: .cpp for
// Surgery class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

//
// Fees for
// SurgTypes.
//
const double 
   services::Surgery::sFee[SSIZE] = 
{
                             1000.0, 
                             600.00, 
                              88.00, 
                             300.00, 
                            1290.00
}; 

vector<double> services::Surgery::V;

services::Surgery::Surgery
        (PatientAccount& pa) : 
                           pARef(pa)
{

   //
   // Load the vector
   // once.
   //
   const bool    e =      V.empty();
   if (e)
      for (int i=0; i<SSIZE; ++i)	
         V.push_back      (sFee[i]);

}


void services::Surgery::addSurgery
   (const SurgTypes s) inline const 
            { pARef.addSurgery(s); } 

