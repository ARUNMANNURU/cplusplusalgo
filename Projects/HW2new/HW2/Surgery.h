#ifndef                  SURGERY_INCL_H
#define                  SURGERY_INCL_H

#include                  "SurgTypes.h"
#include                       <vector>

//
// Can only
// apply within
// a block but
// here global
// for file.
//
using namespace                    std;

//
// Forward Reference.
// Note PatientAccount.h
// NOT included in this .h file.
//
class                  PatientAccount;


//
// Place the
// Surgery class
// in the
// services 
// namespace.
//
namespace services
{

   class Surgery
   {

       PatientAccount&          pARef;

      //
      // Fees for
      // SurgTypes.
      //
      static const double sFee[SSIZE]; 

      static vector<double>         V;

public:

      Surgery    (PatientAccount& pa); 

      inline void px() const
      {
         std::cout << "Surgery" << 
                            std::endl;
      }

      void py()                 const;

      inline static const double 
         getCharge(const SurgTypes s)
                   { return V.at(s); }

       void chargeSurgery
          (const SurgTypes s)   const;

      ~Surgery()        { V.clear(); }

   };

}

#endif