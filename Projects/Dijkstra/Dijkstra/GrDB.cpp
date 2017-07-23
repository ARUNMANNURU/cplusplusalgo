#include "stdafx.h"
#include "Vertex.h"
#include "GrDB.h"
#include <cstdlib>


const int GrDB::getRand(const int b, const int r)
{
   const int v1 =       r - 1;
   const int v2 = rand() % v1;
   const int v3 =      b + v2;
   return                  v3;
}

void GrDB::loadV
(
   const int min, //lowest value in draw pool
   const int   m, // size of draw pool
   const int  ne, // number of elements
   const int  ix, // exclude this value
   VDt&        d  // the vector to load.
)
{

   //
   // Set array
   // initally
   // to the min
   // plus the index.
   //
   for (int i = 0; i< m; ++i)
             iArr[i] = min + i;

   //
   // Exclude the 
   // ix entry from
   // consideration
   // by replacing it
   // with the last entry
   // and decreasing the
   // items we can select
   // from by one.
   //
   const int nm1 =     m-1;
   iArr[ix]      =     nm1;
   int nmt       = nm1 - 1;

   for (int i = 0; i<ne; ++i)
   {

      //
      // Randomly
      // select the
      // element  from
      // the pool and replace
      // it
      // with the last
      // entry
      // to remove
      // it from further
      // consideration.
      //
      const int st = getRand(0,nmt);
      const int nn =       iArr[st];

      iArr[st]     =    iArr[nmt--];

      //
      // Add the selected 
      // entry to
      // the vector.
      //
      d.push_back              (nn);

   }
 
}

GrDB::GrDB()
{
   srand(SEED);
   VDt ei;
   VDt wi;
   for (int i = 0; i<NUM_NODES; ++i)
   {
      const int sr = getRand(1,ME_PER_NODE);
      loadV(0,NUM_NODES,sr,i,ei);
      loadV(5,MAX_WEIGHT,sr,sr-1,wi);
      vArray.push_back(new Vertex(ei,wi,i));
      ei.clear();
      wi.clear();
   }





}

GrDB::~GrDB()
{

}

const Vertex& GrDB::getAt(const int i) const
{ 
   if((i>=0) && (i<NUM_NODES))  
   {
      const Vertex& vr = *vArray[i];
      return               vr;
   }

   //
   // Subscript
   // out of 
   // range.
   //
   cout << "Subscript out of range: " << i     << endl;
   cout << "Must be between 0 and: " << NUM_NODES-1 << endl;
   
   
   exit(i);

}