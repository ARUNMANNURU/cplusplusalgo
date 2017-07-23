#ifndef INCL_VERT_HDR
#define INCL_VERT_HDR

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

typedef vector<const int>   VDt;

class Vertex
{

   const int                  nE;
   VDt                      edge;
   VDt                        wt;

   void abort(const int i) const;

public:

   Vertex
   ( 
      const VDt&               e, 
      const VDt&               w,
      const int                n
   ) : nE(e.size()),edge(e),wt(w)
   {}

   const int getEdge(const int i) 
                           const;

   const int   getWt(const int e) 
                           const;

   inline const int getNE() const 
                   { return nE; }



};

#endif