// Listify.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

enum { NUMNODES  = 18 };
enum { STACKSIZE = 16 };

struct node
{
   int    val;
   node *  lt;
   node *  rt;
};

typedef struct node * nptr;

nptr root     = 0; //root of tree
nptr listhead = 0; //head of list
nptr listtail = 0; //tail of list

nptr stack[STACKSIZE];
int stackptr = -1;

struct node nodearr[NUMNODES] = 
{
   {59,0,0},{83,0,0},{68,0,0},{40,0,0},{82,0,0},{54,0,0},
   {69,0,0},{23,0,0},{98,0,0},{44,0,0},{ 2,0,0},{ 4,0,0},
   {88,0,0},{33,0,0},{19,0,0},{50,0,0},{75,0,0},{17,0,0}
};

void  push(const nptr n) { stack[++stackptr] = n;    }
const nptr pop()         { return stack[stackptr--]; }
const int stackEmpty()   { return (stackptr < 0);    }


void listifyR(const nptr n)
{
   static nptr rptr;

   if(n->lt!=0) listifyR(n->lt);

   //
   // Add this node to the list.
   //
   if(listhead==0) listhead     = n; //smallest element
   else            listtail->lt = n;

   //
   // Change right pointer to the back pointer.
   //
   rptr     = n->rt;
   n->rt    = listtail;

   //
   // Set the tail pointer to n.
   //
   listtail     = n;
   listtail->lt = 0;

   if(rptr) listifyR(rptr);
   
   return;
}


void listifyI(const nptr ni)
{
   nptr   rptr;
   nptr n = ni;

   while ((n) || (stackEmpty() == false))
   {

      if (n)
      {
         push(n);
         n = n->lt;
      }
      else
      {
          n = pop();

          //
          // Add this node to the list.
          //
          if(listhead==0) listhead     = n; //smallest element
          else            listtail->lt = n;

          //
          // Change right pointer to the back pointer.
          //
          rptr     = n->rt;
          n->rt    = listtail;

          //
          // Set the tail pointer to n.
          //
          listtail     = n;

          n = rptr;
       }
   }

   listtail->lt = 0;   
   return;
}

void listout()
{
   nptr cur = listhead;
   while(cur) 
   {
      printf("%d ",cur->val);
      cur = cur->lt;
   }
   printf("\n");
   cur = listtail;
   while(cur) 
   {
      printf("%d ",cur->val);
      cur = cur->rt;
   }
}

void treeinsert(const nptr n)
{
   if (root==0)
   {
      root = n;
      return;
   }
   nptr y =    0;
   nptr x = root;
   while (x!=0)
   {
      y=x;
      if (n->val<x->val)  x = x->lt;
      else                x = x->rt;
   }
   if (n->val<y->val)      y->lt = n;
   else                    y->rt = n;
   return;
}

void inorder(const nptr n)
{
   if(n) 
   {
      inorder      (n->lt);
      printf("%d ",n->val);
      inorder      (n->rt);
   }
   return;
}

int main(int argc, char* argv[])
{

   //
   // Build the tree and print it by doing
   // an inorder traversal.
   //
   int i;
   for( i=0; i<NUMNODES; ++i) 
        treeinsert(&nodearr[i]);

   printf("Inorder tree traversal (should be in ascending order):\n");
   inorder(root);

   //
   // Transform the tree into a doubly likned list
   //
   if (argc>1) listifyR(root);
   else        listifyI(root);

   printf("\n\nList front to back first then back to front:\n");
   listout();

   printf("\n\n");
   return 0;

}


