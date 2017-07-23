#include                                    "stdafx.h"
#include                            "PatientAccount.h"
#include                                   "Surgery.h"
//
// Title: CS116 HW1
//
// Description: .cpp for
// PatientAccount class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

const double PatientAccount::CHARGES_PER_DAY = 530.00;

void     PatientAccount::addSurgery(const SurgTypes s)
{

   //
   // Since getCharge
   // is static
   // it can be called
   // from any object
   // that includes
   // Surgery.h.
   //
   const double c   = services::Surgery::getCharge(s);
   charges         +=                               c;

}

void PatientAccount::chkOut(const int days)
{
   const double t   =          days * CHARGES_PER_DAY;
   charges         +=                               t;
   cout << "Charges: " << charges <<             endl;
}

void   PatientAccount::addMed(const MedTypes m)     
{
   charges         +=                         pFee[m];
}