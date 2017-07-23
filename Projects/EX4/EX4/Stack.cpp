#include           "stdafx.h"
#include            "Stack.h"

//
// Title: CS116 EX4
//
// Description: .cpp for
// a Node* Stack.
// 
// Company: NJIT Fall 2012
//
// Author W Phillips 
//               (214-36-930)
// Version 1.0
//
void Stack::push   (Node&  n)
{ 
   if (tS == stackSize) 
            throw "overflow";  
   stack[tS++] =          &n; 
}

Node& Stack::pop()
{
   if (tS == 0)   
           throw "underflow";
   return       *stack[--tS];
}