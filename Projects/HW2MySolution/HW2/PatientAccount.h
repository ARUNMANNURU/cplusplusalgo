#ifndef           PATIENTACCOUNT_INCL_H
#define           PATIENTACCOUNT_INCL_H
#include                  "SurgTypes.h"
#include                   "MedTypes.h"
//
// Title: CS116 HW1
//
// Description: .h for
// PatientAccount class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

class PatientAccount
{

   double                      charges;
   static const double CHARGES_PER_DAY;

public:

   PatientAccount() :   charges(0.0) {}
   void  addSurgery(const SurgTypes s);
   void       addMed(const MedTypes m);
   void  chkOut       (const int days);

};

#endif