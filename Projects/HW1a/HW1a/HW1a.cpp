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
		   initT[i][j] = (double)(i+j);

   //
   // Initalize to
   // initT.
   //
	initialize                (initT);

   //
   // Multiply all
   // entries by
   // 100.0.
   //
	multC                     (100.0);

   //
   // Display
   // table.
   //
	output                         ();

   //
   // Subtract 0.5
   // from all 
   // entries.
   //
	minusC                      (0.5);

   //
   // Display
   // table.
   //
	output                         ();

   //
   // Zero the
   // table.
   //
	zero                           ();

   //
   // Set entry
   // 2,3 to 100.0.
   //
	put                  (2,3,-100.0);

   //
   // Display
   // table.
   //
	output                         ();

 	return                          0;

}

