#include                  "stdafx.h"
#include                 "Surgery.h"
#include                "InputMgr.h"
#include                "Pharmacy.h"
#include               "SurgTypes.h"
#include          "PatientAccount.h"

//
// Header
//


//
// Note since
// cosnt Surgery&
// and Pharamcy
// we can only call
// const member
// functions of 
// that look like
// void xx(const int x) const {}
//
const bool pInputs
(
   const userInfo                 u,
   const Surgery&                 s,
   const Pharmacy&                p
)
{

   //
   // Send user 
   // input SurgeryTypes
   // value to Surgery
   // object, s.
   //
   const SurgTypes sT =        u.sT;
   s.addSurgery                (sT);

   //
   // Send selected 
   // MedTypes
   // values to 
   // Pharmacy.
   //
   int k =                        0;
   for (   MedTypes m = MedTypes(0); 
                 m < LAST_MED_VALUE; 
                  m = MedTypes(++k))
   {

      //
      // See if the
      // "mth" element
      // is true.  If yes
      // tell Pharmacy
      // object, p to
      // add the med.
      //
      const bool mS =       u.mT[m];
      if (mS)           p.addMed(m);

   }

   const bool c =              u.cO;
   return                         c;
}

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
   //
   Pharmacy                p(pARef);
   Surgery                 s(pARef);

   //
   // checkedOut has
   // to be declared
   // outside of
   // block for
   // the do-while to
   // work.  The compare
   // is outside the
   // do-while block.
   //
   bool                          cO;

   //
   // Days in
   // hospital.
   //
   int      d            =        0;

   //
   // Prompt until
   // checked out.
   //
   InputMgr                      iM;
   do
   {

      //
      // Get the
      // structure 
      // containing
      // user inputs
      //
      const userInfo iI  = iM.get();

      cO        =pInputs (iI, s, p);
      if (cO) d =           iI.days;

   //
   // You could
   // say 
   // do 
   // {
   //   d =             iI.days;
   // } while(!pInputs(iI,s,p));
   // but leave
   // that up to
   // the optimizer.
   // Intermediate values
   // can help when
   // debugging.
   //
   } while            (cO == false);

   //
   // Check the
   // patient 
   // out.
   //
   pARef.chkOut                 (d);

   return                         0;

}

