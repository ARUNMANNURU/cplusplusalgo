#ifndef INCL_DNODE_HDR
#define INCL_DNODE_HDR

#include <iostream>
#include <iomanip>
#include "Vertex.h"
#include <climits>


using namespace std;



class DNode
{
   const Vertex& v;

   bool vstd;
   int dst;
   int bI;

public:
   DNode(const Vertex& vt) : v(vt), vstd(false), dst(INT_MAX) {}


   inline const int getEdge(const int i) const
   { return v.getEdge(i);}

   inline const int   getWt(const int e) const
   { return v.getWt(e); }

   inline const int getNE() const 
                   { return v.getNE(); }

   inline const int getBi() const 
                                { return bI; }

   inline const bool getVstd() { return vstd; }

   inline void setVstd()       { vstd = true; }

   void testNode(const int n, const int d);

};

#endif