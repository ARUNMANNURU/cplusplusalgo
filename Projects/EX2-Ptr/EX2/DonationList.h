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

   //
   // Number of
   // donations.
   //
   int                                nD;

   //
   // Array of pointers.
   //
	Car const**                      cPtr;

   //
   // Sort function.
   //
	void                           sort();

   //
   // Helper function
   //
   void setArray        (Car const** cp);

   //
   // Reference to
   // the car donations
   // database.
   //
   const DonDB&                    giftsM;

public:

   //
   // Constructor
   // and destructor.
   //
	DonationList      (const DonDB& gifts);
   ~DonationList                       ();

   //
   // Copy
   // constructor.
   //
   DonationList    (const DonationList& d) : 
                           giftsM(d.giftsM),
                                    nD(d.nD)
   {
      setArray                     (d.cPtr);
   }

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
