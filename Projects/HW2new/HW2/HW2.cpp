#include                  "stdafx.h"
#include          "PatientAccount.h"
#include                "Pharmacy.h"
#include               "SurgTypes.h"
#include                 "Surgery.h"
#include                "InputMgr.h"
//
// Header
//

using namespace            services;

int _tmain(int argc, _TCHAR* argv[])
{


   //
   // Declare
   // Patient Account
   // Object.
   //
   PatientAccount                pA; 
   PatientAccount&       pARef = pA;

   //
   // Declare
   // classes.
   // Note you
   // can pass
   // pA or pARef. (PICK ONE WAY OR THE OTHER)
   //
   Pharmacy                p(pARef);
   Surgery                    s(pA);

   //
   // Prompt until
   // checked out.
   //
   InputMgr                      iM;
   bool                  checkedOut;
   do
   {
      const userInfo iI  = iM.get();
	  checkedOut         =    iI.cO;

	  const SurgTypes sT =    iI.sT;
	  s.chargeSurgery          (sT);

   } while    (checkedOut == false);


   //
   // Directly
   // call px
   // in the
   // objects 
   // referenced 
   // here.
   //
   p.px                          ();
   s.px                          ();

   //
   // Call 
   // PatientAccount
   // through s & p
   // objects.
   //
   p.py                          ();
   s.py                          ();

   //
   // Directly 
   // call.
   //
   pA.                         px();
   pARef.                      px();

   return                         0;

}

