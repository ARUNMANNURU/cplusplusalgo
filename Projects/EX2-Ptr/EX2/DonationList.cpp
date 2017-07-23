#include                          "stdafx.h"

#include                    "DonationList.h"
#include                             "Car.h"
#include                           "DonDB.h"
#include                          <iostream>   


using namespace                         std;

void DonationList::setArray(Car const ** cp)
{

   if (nD)
   {
      //
      // Allocate an 
      // array of pointers.
      //
      cPtr =            new Car const *[nD];

      //
      // Initialize the array.
      //
      for (int c=0; c<nD; ++c) 
         cPtr[c]          =           cp[c];
   }

}

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
        (const DonDB& gifts) : giftsM(gifts),
                               nD(gifts.nI())
{

   if (nD > 0)
   {
      //
      // Allocate an 
      // array of pointers.
      //
      cPtr =            new Car const *[nD];

      //
      // Initialize the array.
      //
      for (int c=0; c<nD; ++c)
                cPtr[c] =   &gifts.getAt(c);
   }

   //
   // Sort the
   // array of 
   // pointers.
   //
   sort                                  ();

}


//
// Destructor frees the 
// memory allocated by the 
// constructor
//
DonationList::~DonationList()
{
   if (nD)                  delete [] cPtr;
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

   int                                   mI;
   const int ndm1 =                  nD - 1;
   for (int scan  = 0; scan < ndm1; ++scan)
   {
      mI            =                  scan;
      const int sp1 =              scan + 1;

      for(int i = sp1; i < nD;  ++i)
      {
          const Car& left  =       *cPtr[i];
          const Car& right =      *cPtr[mI];

          //
          // Overoaded 
          // operator used.
          //
          if (left<right)           mI = i;

      }

      const Car* const t   =       cPtr[mI];
      cPtr[mI]             =     cPtr[scan];
      cPtr[scan]           =              t;
    }
}

//
// The show function uses 
// cout to display the donations 
// array in sequential order.   
//
void DonationList::show()
{

   std::ofstream                       oout;
   oout.open            ("OriginalOut.txt");
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
   std::ofstream                       oout;
   oout.open              ("SortedOut.txt");
   for    (int i = 0; i < nD; ++i)
   {

      const Car* c    =             cPtr[i];
      oout<<"MAKE: "  << c->getMake() <<" ";
      oout<<"MODEL: " << c->getModel()<<" ";
      oout<<"YEAR: "  << c->getYear() <<" ";
      oout<<"COST: "  << c->getCost()<<endl;

   }

   oout.                            close();
}

