//
// Title: CS116 EX4
//
// Description: .cpp for
// EX4.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

#include "stdafx.h"
#include "Stack.h"
#include "Tree.h"
#include "Node.h"
#include "List.h"
#include <iostream>

//
// Unit test 
// for tree.
//
void treeUT()
{
   Tree                             tT;
   std::cout     <<          std::endl;
   Node*   tr    =         tT.getTree();
   tT.preOrder                    (tr);
   std::cout     <<          std::endl;

   //
   // Create a List
   // object.
   //
   List l                         (tr);

   //
   // Traverse 
   // from head to
   // tail.
   //
   Node* h =                  l.getH();
   std::cout<<     "\nHead to tail:\n";
   while(h) 
   {
      std::cout<< h->getData() <<  " ";
      h   =                 h->getPR();
   }
   std::cout   <<            std::endl;

   //
   // Traverse
   // from tail to
   // head.
   //
   Node* t =                  l.getT();
   std::cout<<     "\nTail to head:\n";
   while(t) 
   {
      std::cout<< t->getData()  << " ";
      t    =                t->getPL();
   }
   std::cout   <<            std::endl;

}

//
// Unit test
// for stack. 
//
void stackUT(const int ss)
{
   Stack                         s(ss);
   try
   {
      int i =                        0;
      while(1) 
      {
         s.push            (Node(++i));
         std::cout<< i <<    std::endl;
      }
   }
   catch(const char* const c)
   {
      std::cout<< c <<       std::endl;
   }
    
   while(1)  {const Node& n = s.pop();}

}

int _tmain(int argc, _TCHAR* argv[])
{

   //
   // Execute the
   // unit test for
   // the Stack
   // object.
   //
   //try
   //{
   //   stackUT                     (10);
   //}
   //catch(const char* const c)
   //{
   //   std::cout<< c <<       std::endl;
   //}

   //
   // Execute unit
   // test for the
   // Tree and List 
   // units.
   //
   treeUT                          ();

   return 0;

}

