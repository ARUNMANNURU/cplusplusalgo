#include "stdafx.h"
#include "Car.h"
#include "DonationList.h"
#include "DonDB.h"
//
// Title: CS116 EX2
//
// Description: .h for EX2.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

int _tmain(int argc, _TCHAR* argv[])
{
   const DonDB                    t;

   DonationList               dO(t);


   //
   // Copy the
   // object using
   // copy constructor.
   //
   DonationList               d1(dO);
   DonationList d  =              d1;

   d.show                         ();
   d.showSorted                   ();

	return 0;
}

