#include                  "stdafx.h"
#include                 "Surgery.h"
#include          "PatientAccount.h"
//
// Fees for
// SurgTypes.
//
const double services::Surgery::sFee[SSIZE] = 
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


void services::Surgery::py() inline const 
                    { pARef.px(); } 

void services::Surgery::chargeSurgery
   (const SurgTypes s) inline const 
           { pARef.addSurgery(s); } 