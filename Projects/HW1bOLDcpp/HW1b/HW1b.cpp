#include                   "stdafx.h"
#include                    "Table.h"
//
// Title: CS116 ANSI C example.
//
// Description: Header for
// HW 1.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

int _tmain(int argc, _TCHAR*  argv[])
{
   Ttype                       initT;
   int                             i;
   int                             j;
	for (i=0; i<TSIZE; ++i)
		for (j=0; j<TSIZE; ++j)
		   initT[i][j] = 
		               (double)(i+j);

   double                          t;

   //
   // Initalize to
   // initT.
   //
   accessTable  (INIT,0,0,0,t,initT);

   //
   // Multiply all
   // entries by
   // 100.0.
   //
   accessTable (MULTC,0,0,100.0,t,0);

   //
   // Display
   // table.
   //
   accessTable    (OUTPUT,0,0,0,t,0);

   //
   // Subtract 0.5
   // from all 
   // entries.
   //
   accessTable  (MINUSC,0,0,0.5,t,0);

   //
   // Display
   // table.
   //
   accessTable    (OUTPUT,0,0,0,t,0);

   //
   // Zero the
   // table.
   //
   accessTable      (ZERO,0,0,0,t,0);

   //
   // Set entry
   // 2,3 to 100.0.
   //
   accessTable  (PUT,2,3,-100.0,t,0);

   //
   // Display
   // table.
   //
   accessTable    (OUTPUT,0,0,0,t,0);

   //
   // Get entry 2,3
   //
   accessTable       (GET,2,3,0,t,0);

   return                          0;

}

