#ifndef      DONLIST_H
#define      DONLIST_H

//
// Required to
// write to file.
//
#include     <fstream>

//
// Forward
// references.
//
class             Car;
class           DonDB;

class DonationList
{

private:

   //
   // Number of
   // cars donated
   // (records in 
   // database).
   //
	int                      numDonations;

   //
   // Array of pointers.
   //
	//Car const**                      cPtr;
   //
   // Array of indices.
   //
	int*                         arrIndex;

   //
   // Sort function.
   //
	void                           sort();

   //
   // Less than 
   // comparison 
   // function.
   //
   const bool lessThan
            (const Car& l, const Car& r);
   //
   // Stream variable
   // for file output.
   //
   std::ofstream                    oout;

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
   ~DonationList                       ();

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
