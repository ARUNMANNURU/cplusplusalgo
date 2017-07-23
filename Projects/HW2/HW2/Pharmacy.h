
#ifndef              PHARMACY_INCL_H
#define              PHARMACY_INCL_H
#include                  <iostream>
#include                   <iomanip>
#include          "PatientAccount.h"
#include                "MedTypes.h"
//
// Header.
//



class Pharmacy
{

   PatientAccount&            pARef;

public:

   //
   // Constructor.
   // Use initialzation
   // list to 
   // initalize
   // member reference
   // variables.
   // This works for 
   // all types like
   // int, double, etc.
   // It is better
   // than initalizing
   // by assignment,
   // allows you to initialize
   // const variables
   // and works
   // for initializing 
   // references.
   //
   Pharmacy
        (PatientAccount& pa) : 
            pARef               (pa)
                                         {}

   inline void addMed(const MedTypes m) 
                   const {pARef.addMed(m);}
};

#endif