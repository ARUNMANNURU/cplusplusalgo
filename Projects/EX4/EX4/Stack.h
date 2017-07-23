#ifndef               STACK_INCL_H
#define               STACK_INCL_H
#include                  "Node.h"
//
// Title: CS116 EX4
//
// Description: .h for
// a Node* Stack.
// 
// Company: NJIT Fall 2012
//
// Author W Phillips (214-36-930)
// Version 1.0
//

class Stack
{
    const int           stackSize;
    Node**                  stack;
    int                        tS;

public:

   Stack(const int ss): 
              stackSize(ss), tS(0)
   {stack = new Node*[stackSize];}

   void push            (Node& n);

   Node&                    pop();

   inline const bool empty() const 
               { return (tS==0); }

   inline const bool full() const 
       { return (tS==stackSize); }

   inline const int nE() const 
                    { return tS; }

   inline void clear() { tS = 0; }

   ~Stack()    { delete[] stack; }

};

#endif