#ifndef      DONLIST_H
#define      DONLIST_H

#include     <vector>

//
// Title: CS116 EX2
//
// Description: .h for
// DonationList class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//
//
// Forward
// references.
//
class             Car;
class           DonDB;

using namespace std;

class DonationList
{

private:

   //
   // Vector of pointers
   //
   vector<Car const* const>         vPtr; 

   //
   // Sort function.
   //
	void                           sort();

   //
   // Reference to
   // the car donations
   // database.
   //
   const DonDB&                   giftsM;

public:

   //
   // Constructor
   // and destructor.
   //
	DonationList      (const DonDB& gifts);

   //
   // Output records
   // in original
   // order.
   //
	void show                           ();

   //
   // Output records
   // in sorted
   // order.
   //
	void showSorted                     ();

};

#endif
