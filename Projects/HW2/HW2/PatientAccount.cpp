#include                                "stdafx.h"
#include                        "PatientAccount.h"


const double 
         PatientAccount::CHARGES_PER_DAY = 530.00;

void PatientAccount::addSurgery(const SurgTypes s)
{
   charges         +=                     sFee[s];
}

void   PatientAccount::addMed(const MedTypes m) 
{
   charges         +=                     pFee[m];
}

void PatientAccount::chkOut(const int d)
{
   using namespace                            std;
   const double c   =         d  *CHARGES_PER_DAY;
   charges         +=                           c;
   cout << "CHARGES WERE: " << charges    << endl;
}