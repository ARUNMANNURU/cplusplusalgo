
#include "stdafx.h"
#include "Vertex.h"

void Vertex::abort(const int i) const
{
   cout <<       "Error in Vertex ";
   cout <<       "object!  Code = ";
   cout << i                << endl;
   exit(i);
}


const int Vertex::getWt(const int e) const      
{ 

   //
   // If range
   // check passes,
   // return the
   // edge weight.
   //
   if (e<0)                abort(1);
   if (e>=nE)              abort(2);
   const int ans =            wt[e];
   return                      ans; 

}

const int Vertex::getEdge(const int i) const
{
    //
   // If range
   // check passes,
   // return the
   // edge.
   //
   if (i<0)                abort(3);
   if (i>=nE)              abort(4);
   const int ans =          edge[i];
   return                      ans; 
}

 
