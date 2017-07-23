#ifndef                  SURGERY_INCL_H
#define                  SURGERY_INCL_H
#include                  "SurgTypes.h"
#include                       <vector>
//
// Title: CS116 HW1
//
// Description: .h for
// Surgery class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

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

      PatientAccount&           pARef;

      //
      // Fees for
      // SurgTypes.
      // V loaded by
      // constructor.
      //
      static const double sFee[SSIZE]; 
      static vector<double>         V;

 public:

      Surgery    (PatientAccount& pa); 

      //
      // Static function
      // to return
      // surgery.
      //
      inline static const double 
         getCharge(const SurgTypes s)
                   { return V.at(s); }

      void addSurgery
          (const SurgTypes s)   const;

   };

}

#endif