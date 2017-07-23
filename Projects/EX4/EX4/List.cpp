#include "stdafx.h"
#include <stdlib.h>
#include "List.h"
#include <iostream>
#include "Stack.h"
#include "Node.h"
//
// Title: CS116 EX4
//
// Description: .cpp for
// List.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//


List::List(Node* n) : hD(0), tL(0) 
{
   Listify(n);
}

void List::delList( Node*  n)
{

   Node* h =          getH();
   Node*                  hn;
   while(h) 
   {
      
      hn =        h->getPR();
      delete               h;
      h  =                hn;

   }
}


void List::pOList( Node*  n)
{

   //
   // Insert at 
   // head.
   //
   Node* const p    =     hD;
   n->setPL              (0);
   hD               =      n;
   if (!tL)
   {
      tL =                 n;
      n->setPR           (0);
   }
   else
   {
      n->setPR           (p);
      p->setPL           (n);
   }

}

void List::preOrder( Node* n)
{

   if (n)
   {
      const int data  = 
              (n->getData());
      if(DEBUG)  std::cout<<
                  data<< " ";
      Node&  nt       =   *n;
      sP->push          (nt);
      preOrder  (n->getPL());
      preOrder  (n->getPR());
   }

}

void List::Listify  (Node* n)
{

   sP        = new Stack(sS);
   preOrder              (n);
   while (sP->empty()==false)
   {
      Node* n = &(sP->pop());
      pOList             (n);
   }
   delete                 sP;
}


