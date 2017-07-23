#include                     "stdafx.h"
#include                      "Table.h"
//
// Title: CS116 C example.
//
// Description: Implementation for
// HW 1.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

//
// This is the
// encapsulated 
// table of
// doubles.
//
Ttype                    internalTable;

static void setAll(const double x)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
		 internalTable[i][j] =       x;
}

void initialize(const Ttype t)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
		 internalTable[i][j] = t[i][j];
}

void initializeC(const double x)
                       { setAll(x); }  


//
// Notice no
// overloading.
//                  
void addC(const double s)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
		 internalTable[i][j]  +=     s;
}

void add(const Ttype t)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
		 internalTable[i][j]+= t[i][j];
}

void minusC(const double s)
                         {addC(-s);}

void minus(const Ttype t)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
       internalTable[i][j]-= t[i][j];
}

void multC         (const double s)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
		 internalTable[i][j]  *=     s;
}

const double 
	      get(const int i, const int j)
{
   return (const double)
	               internalTable[i][j];
}

void put
(
   const int                         i, 
   const int                         j, 
   const double                      v
)          { internalTable[i][j] = v; }

void zero()            { setAll(0.0); }  

void output()
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
   {
      for(j=0; j<TSIZE; ++j)
		 printf("%f  ",
		          internalTable[i][j]);
	  printf                    ("\n");
   }
   printf                       ("\n");

}