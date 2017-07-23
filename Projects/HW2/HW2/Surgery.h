#ifndef               SURGERY_INCL_H
#define               SURGERY_INCL_H


#include               "SurgTypes.h"
#include          "PatientAccount.h"


class Surgery
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
   Surgery
        (PatientAccount& pa) : 
            pARef               (pa)
                                  {}


   inline void addSurgery
	   (const SurgTypes s) const
              {pARef.addSurgery(s);}

};

#endif