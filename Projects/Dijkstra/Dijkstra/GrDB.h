#ifndef                         GRDB_INCL_HDR
#define                         GRDB_INCL_HDR

#include                              "Vertex.h"
#include <vector>

class GrDB
{

   enum { ME_PER_NODE   =    50 };
   enum { NUM_NODES     =  2000 };
   enum { MAX_WEIGHT    =   450 };
   enum { SEED          =  1982 };

   int iArr[NUM_NODES + MAX_WEIGHT];

   //
   // The array
   // of Car objects.
   //
   vector<const Vertex * const> vArray;

   void loadV
   (
      const int min, //lowest value in draw pool
      const int   m, // size of draw pool
      const int  ne, // number of elements
      const int  ix, // exclude this value
      VDt&        d  // the vector to load.
   );

   const int getRand(const int b, const int r);

public:

   GrDB();
   ~GrDB();

   //
   // Return the
   // ith record.
   //
   const Vertex&       getAt(const int i) const;
                      

   //
   // Return number
   // of items.
   //
   inline const int nI() const
                             { return NUM_NODES; }
};

#endif