#ifndef        PATIENTACCOUNT_INCL_H
#define        PATIENTACCOUNT_INCL_H

#include               "SurgTypes.h"
#include                "MedTypes.h"

class PatientAccount
{
	double charges;

	static const double CHARGES_PER_DAY;

public:

   inline void px() const 
      {
         std::cout <<
           "Charges = " << charges
                       << std::endl;
      };

   PatientAccount() :  charges(0.0) {}

   void addSurgery(const SurgTypes s);
   void      addMed(const MedTypes m);

};

#endif