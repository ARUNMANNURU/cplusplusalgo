#include                          "stdafx.h"

#include                    "DonationList.h"
#include                             "Car.h"
#include                           "DonDB.h"
#include                          <iostream>   


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
                              giftsM(gifts), 
                    numDonations(gifts.nI())
{

   if (numDonations > 0)
   {

      //
      // Allocate an 
      // array of pointers.
      //
      //cPtr = 
      //        new Car const *[numDonations];
      //
      // Allocate an 
      //array of indices.
      //
      arrIndex        =
                      new int[numDonations];

      //
      // Initialize the array.
      //
      //for (int c=0; c<numDonations; ++c)
      //          cPtr[c] =  &giftsM.getAt(c);
      //
      // Initialize the array.
      //
      for (int c=0; c<numDonations; ++c)
          arrIndex[c] =                   c;

      //
      // Sort the 
      // array.
      //
      sort                               ();

   }
}

//
// Destructor frees the 
// memory allocated by the 
// constructor
//
DonationList::~DonationList()
{

//
// NOTE: this does NOT
// delete any Car objects.
// It would if cPtr
// constained the
// actual objects
// instead of pointers.
// The POINTERS are
// the only thing deleted.
//
//   if (numDonations)     delete []     cPtr;

   //
   // Delete the
   // indices.
   //
   if (numDonations)     delete [] arrIndex;

}


//
// Less than to sort
// on cost first then
// year.
//
const bool DonationList::lessThan
                (const Car& l, const Car& r)
{
   const double lCost =         l.getCost();
   const double rCost =         r.getCost();
   if (lCost != rCost) 
                     return (lCost < rCost);

   const int lYear   =          l.getYear();
   const int rYear   =          r.getYear();

   return                   (lYear < rYear);
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

    int                            minIndex;
    const int ndm1 =       numDonations - 1;
    for (int scan  = 0; scan < ndm1; ++scan)
    {
       minIndex    =                   scan;
       const int sp1 =             scan + 1;

       for(int index = sp1; 
                 index < numDonations;
                                    ++index)
       {
          const Car& left  =    
              giftsM.getAt(arrIndex[index]);
          const Car& right = 
           giftsM.getAt(arrIndex[minIndex]);
          if (lessThan(left, right)) 
                           minIndex = index;
         }

      const  int t    =  arrIndex[minIndex];
      arrIndex[minIndex]  
                       =     arrIndex[scan];
      arrIndex[scan]   =                  t;
    }
}

//
// The show function uses 
// oout to output the donations 
// array in sequential order.   
//
void DonationList::show()
{

   oout.open            ("OriginalOut.txt");

	for    (int i = 0; i < numDonations; ++i)
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
// function outputs the elements 
// of the donations 
// array in ascending order.           
//
void DonationList::showSorted()
{

   oout.open              ("SortedOut.txt");

	for    (int i = 0; i < numDonations; ++i)
   {

      const int index =         arrIndex[i];
      const Car& c    = giftsM.getAt(index);
      oout<< "MAKE: "  << c.getMake() <<" ";
      oout<< "MODEL: " << c.getModel()<<" ";
      oout<< "YEAR: "  << c.getYear() <<" ";
      oout<< "COST: "  << c.getCost()<<endl;

   }

   oout.                            close();
}

