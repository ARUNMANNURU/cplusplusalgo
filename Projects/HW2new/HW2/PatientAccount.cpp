#include                                    "stdafx.h"
#include                            "PatientAccount.h"
#include                                   "Surgery.h"


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

void   PatientAccount::addMed(const MedTypes m)     {}