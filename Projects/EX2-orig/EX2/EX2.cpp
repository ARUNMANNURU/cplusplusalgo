// HW3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Car.h"
#include "DonationList.h"
#include "DonDB.h"

int _tmain(int argc, _TCHAR* argv[])
{

   //
   // The donations
   // database 
   // interface.
   //
   const DonDB     t;

   //
   // Create a
   // donation
   // list object.
   //
   DonationList d(t);

   //
   // Output results
   // sorted and unsorted
   // to output
   // files.
   //
   d.show         ();
   d.showSorted   ();

	return 0;
}

