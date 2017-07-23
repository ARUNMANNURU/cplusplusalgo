#ifndef               TREE_INCL_H
#define               TREE_INCL_H
#include                 "Node.h"
#include                 <vector>

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
class Tree
{
    enum       { DEBUG = false };
    Node*                  nTree;

    std::vector<int>        iarr;
    int                     ipos;

    void enter       ( Node** n);
    
public:

   Tree                       (); 

   inline Node* getTree() const 
                { return nTree; }

   void preOrder     ( Node*  n);

};

#endif