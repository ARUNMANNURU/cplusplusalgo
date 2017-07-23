#ifndef                     NODE_INCL_H
#define                     NODE_INCL_H

//
// Title: CS116 EX4
//
// Description: .h for
// Tree.
// 
// Company: NJIT Fall 2012
//
// Author W Phillips (214-36-930)
// Version 1.0
//
class Node
{
   //
   // Data, and
   // left and
   // right 
   // pointers.
   //
   const int                       data;
   Node*                             pL;
   Node*                             pR;

public:

   Node(const int d) : 
         data(d), pL(0), pR(0)        {}

   //
   // The following
   // two functions
   // are only used
   // to build the 
   // tree.
   //
   inline  Node** getPLa()  {return &pL;}
   inline  Node** getPRa()  {return &pR;}

   inline  Node* getPL()  const  
                            {return pL;}
   inline  Node* getPR()  const 
                            {return pR;}

   inline void setPR( Node* pT) 
                              {pR = pT;}
   inline void setPL( Node* pT) 
                              {pL = pT;}

   inline const int getData() const
                        { return data; }

};
#endif