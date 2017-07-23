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
		 internalTable[i][j] =     x;
}

static void initialize(const Ttype t)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
		 internalTable[i][j] = t[i][j];
}

static void initializeC(const double x)
                       { setAll(x); }  


//
// Notice no
// overloading.
//                  
static void addC(const double s)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
		 internalTable[i][j]  +=   s;
}

static void add(const Ttype t)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
		 internalTable[i][j]+= t[i][j];
}

static void minusC(const double s)
                         {addC(-s);}

static void minus(const Ttype t)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
       internalTable[i][j]-= t[i][j];
}

static void multC         (const double s)
{
   int                             i;
   int                             j;
   for(i=0; i<TSIZE; ++i)
      for(j=0; j<TSIZE; ++j)
		 internalTable[i][j]  *=     s;
}

static const double 
	      get(const int i, const int j)
{
   return (const double)
	               internalTable[i][j];
}

static void put
(
   const int                         i, 
   const int                         j, 
   const double                      v
)          { internalTable[i][j] = v; }

static void zero()     { setAll(0.0); }  

static void output()
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

void accessTable
(
   const AccessCode                 aC,
   const int                        i1,
   const int                        i2,
   const double                     d1,
         double&                    d2,
   const Ttype                      t1
)
{
   switch (aC)
   {
      case SETALL:
         setAll                   (d1);
         break;
      case INIT:
         initialize               (t1);
         break;
      case INITC:
         initializeC              (d1);
         break;
      case ADD:
         add                      (t1);
         break;
      case ADDC:
         addC                     (d1);
         break;
      case MINUS:
         minus                    (t1);
         break;
      case MINUSC:
         minusC                   (d1);
         break;
      case MULTC:
         multC                    (d1);
         break;
      case GET:
         d2 = get              (i1,i2);
         break;
      case PUT:
         put                (i1,i2,d1);
         break;
      case ZERO:
         zero                       ();
         break;
      case OUTPUT:
         output                     ();
  }


}