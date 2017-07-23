#include "stdafx.h"
#include <stdlib.h>
#include "Tree.h"
#include <iostream>
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

Tree::Tree() : ipos(0)
{    
   //
   // Build the
   // tree.
   //
   const int x  =                   -1;
   iarr.push_back                  (1);
   iarr.push_back                  (2);
   iarr.push_back                  (3);
   iarr.push_back                  (x);
   iarr.push_back                  (x);
   iarr.push_back                  (4);
   iarr.push_back                  (5);
   iarr.push_back                  (x);
   iarr.push_back                  (x);
   iarr.push_back                  (6);
   iarr.push_back                  (7);
   iarr.push_back                  (x);
   iarr.push_back                  (x);
   iarr.push_back                  (x);
   iarr.push_back                  (8);
   iarr.push_back                  (9);
   iarr.push_back                  (x);
   iarr.push_back                  (x);
   iarr.push_back                 (10);
   iarr.push_back                 (11);
   iarr.push_back                 (12);
   iarr.push_back                  (x);
   iarr.push_back                  (x);
   iarr.push_back                 (13);
   iarr.push_back                  (x);
   iarr.push_back                  (x);
   iarr.push_back                 (14);
   iarr.push_back                  (x);
   iarr.push_back                  (x);
   iarr.push_back                  (0);
   enter                      (&nTree); 
   iarr.clear                       ();
}

//
// Test function.
// Prints the 
// data pre order.
//
void Tree::preOrder( Node*  n)
{
   if (n)
   {
      const int data  = (n->getData());
      if(DEBUG)  std::cout<<data<< " ";
      preOrder            (n->getPL());
      preOrder            (n->getPR());
   }

}

//
// Method
// called by
// constructor
// to build 
// the tree.
//
void Tree::enter( Node** n)
{

   //
   // Process the
   // ints until 
   // a 0 is 
   // reached.
   //
   const int ival =       iarr[ipos++];
   if (ival)
   {
      if (DEBUG) 
      {
         if ((ival==-1)) 
            std::cout <<          '.';
         else std::cout <<       ival;
      }

      //
      // If there is 
      // to be a node,
      // add it to
      // the tree.
      //
      if ( ival != -1 )
      {
         const int data      =    ival;
         *n         =   new Node(data);
         enter        ((*n)->getPLa());
         enter        ((*n)->getPRa());
      }

   }
}