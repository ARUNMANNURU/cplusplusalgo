#ifndef           HCONTROL_INCL_H
#define           HCONTROL_INCL_H

//
// Title: CS116 HW1
//
// Description: .h file for
// HControl class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

//
// Forward 
// declarations.
//
namespace services
{
   class                 Surgery;
}
class             PatientAccount;
class                   Pharmacy;

class HControl
{

   const services::Surgery&    s; 
   const          Pharmacy&    p; 
   PatientAccount&            pA;

public:

   HControl
   (
      const services::Surgery& sD, 
      const          Pharmacy& pD,  
      PatientAccount&         pAD
   ) : s(sD), p(pD), pA(pAD)   {}

   void pInputs();

};

#endif