#include                          "stdafx.h"
#include                    "DonationList.h"
#include                             "Car.h"
#include                           "DonDB.h"
#include                           <fstream>
#include                          <iostream>   
//
// Title: CS116 EX2
//
// Description: .cpp for
// DonationList class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

using namespace                         std;

//
// Constructor.                                            
// The argument passed to 
// num indicates the number of      
// elements in array passed 
// to gifts. The gifts array      
// holds the list of donation 
// values. The constructor      
// allocates the donations and 
// arrPtr arrays. The gifts    
// array is copied to the 
// donations array. The elements    
// of the arrPtr array are 
// made to point to the elements   
// of the donations array, 
// and then sorted in ascending    
// order by the selectSort function.                       
//
DonationList::DonationList
       (const DonDB& gifts) :
                              giftsM(gifts)
{
   const int numDonations   =   gifts.nI();
   if (numDonations > 0)
   {  

      //
      // Initialize the array.
      //
      for (int c=0; c<numDonations; ++c)
      {
         const Car* cr  =  &giftsM.getAt(c);
         vPtr.push_back                (cr);
      }

      //
      // Sort the 
      // array.
      //
      sort                               ();

   }
}

//
// The sort function 
// performs a  
// sort on the   
// array of indices. The 
// array is sorted on the 
// values its elements point to.
//
void DonationList::sort()
{
   const int nD   =             vPtr.size();
   const int ndm1 =                  nD - 1;
   for (int scan  = 0; scan < ndm1; ++scan)
   {
            int minI =                 scan;
      const int sp1  =             scan + 1;

      for(int i = sp1; i < nD; ++i)
      {
          const Car& left  =       *vPtr[i];
          const Car& right =    *vPtr[minI];

          //
          // Overoaded 
          // operator used.
          //
          if (left < right)        minI = i;

      }

      //
      // Swap current
      //   (scan)
      // entry with 
      // minimum.
      //
      const Car* const t  =      vPtr[minI];
      vPtr[minI]          =      vPtr[scan];
      vPtr[scan]          =               t;

    }

}

//
// The show function uses 
// cout to display the donations 
// array in sequential order.   
//
void DonationList::show()
{
   ofstream                            oout;
   oout.open            ("OriginalOut.txt");
   const int  nD =              vPtr.size();

	for    (int i = 0; i < nD; ++i)
   {
      const Car& c    =     giftsM.getAt(i);
      oout<< "MAKE: "  << c.getMake() <<" ";
      oout<< "MODEL: " << c.getModel()<<" ";
      oout<< "YEAR: "  << c.getYear() <<" ";
      oout<< "COST: "  << c.getCost()<<endl;
   }

   oout.                            close();
}

//
// The showSorted function 
// uses cout to 
// display the values
// pointed to by the elements 
// of the arrIndex array. Since 
// arrIndex is sorted, this 
// function displays the elements 
// of the donations 
// array in ascending order.           
//
void DonationList::showSorted()
{
   ofstream                            oout;
   oout.open              ("SortedOut.txt");
   const int nD  =              vPtr.size();
	for    (int i = 0; i < nD; ++i)
   {

      const Car* c    =             vPtr[i];
      oout<<"MAKE: "  << c->getMake() <<" ";
      oout<<"MODEL: " << c->getModel()<<" ";
      oout<<"YEAR: "  << c->getYear() <<" ";
      oout<<"COST: "  << c->getCost()<<endl;

   }
   oout.                            close();
}

