#ifndef                          TARR_CAR_HDR
#define                          TARR_CAR_HDR
#include                              "Car.h"
//
// Title: CS116 EX2
//
// Description: .h for
// DonDB class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

enum                         { CLEN = 5000 };
enum                   { CLENM1 = CLEN - 1 };

class DonDB
{

   //
   // The array
   // of Car objects.
   //
   static const Car           carArray[CLEN];

public:

   //
   // Return the
   // ith record.
   //
   const Car&       getAt(const int i) const;
                      

   //
   // Return number
   // of items.
   //
   inline const int nI() const
                             { return CLEN; }
};

#endif