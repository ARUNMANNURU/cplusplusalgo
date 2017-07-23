#ifndef                LIST_INCL_H
#define                LIST_INCL_H
#include                  <vector>

//
// Title: CS116 EX4
//
// Description: .h for
// List.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//
class                        Node;
class                       Stack;

class List
{
   enum         { DEBUG = false };
   enum              { sS = 128 };
   Node*                  linkedL;
   Node*                       hD;
   Node*                       tL;

   Stack*                      sP;

   void delList         (Node* n);
   void pOList          (Node* n);
   void preOrder        (Node* n);
   void Listify         (Node* n);

public:

   List                 (Node* n); 

   inline Node* const getH() const 
                    { return hD; }

   inline Node* const getT() const 
                    { return tL; }

   ~List()   { delList(linkedL); }

};

#endif