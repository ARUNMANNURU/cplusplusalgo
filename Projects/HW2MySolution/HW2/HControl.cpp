#include                  "stdafx.h"
#include                "HControl.h"
#include                "InputMgr.h"
#include          "PatientAccount.h"
#include                 "Surgery.h"
#include                "Pharmacy.h"
#include                "UserInfo.h"
//
// Title: CS116 HW1
//
// Description: .cpp file for
// HControl class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

void HControl::pInputs()
{

   //
   // checkedOut has
   // to be declared
   // outside of the
   // block for
   // the do-while to
   // work.  The compare
   // is outside the
   // do-while block.
   //
   bool                          cO;

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
      const UserInfo iI  = iM.get();

      //
      // Send user 
      // input SurgeryTypes
      // value to Surgery
      // object, s.
      //
      const SurgTypes sT = 
                         iI.getST();
      s.addSurgery             (sT);

      //
      // Send selected 
      // MedTypes
      // values to 
      // Pharmacy.
      //
      if (iI.getAS()) 
                  p.addMed(aspirin);
      if (iI.getES()) 
                p.addMed(execedrin);
      if (iI.getIS()) 
                   p.addMed(ipecac);
      if (iI.getNS()) 
                 p.addMed(novocain);
      if (iI.getTS()) 
                     p.addMed(tums);

      cO            =    iI.getCO();
      if (cO)
      { 
         //
         // Check the
         // patient 
         // out.
         //
         const int d = iI.getDays();
         pA.chkOut              (d);

      }

   } while            (cO == false);


}   
   
 