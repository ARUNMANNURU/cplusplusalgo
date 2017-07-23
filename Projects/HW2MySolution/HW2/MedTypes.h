#ifndef                  MEDTYPES_INCL_H
#define                  MEDTYPES_INCL_H
//
// Title: CS116 HW1
//
// Description: MedTypes for
// HW2.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

typedef enum 
{
   aspirin,
   ipecac,
   novocain,
   tums,
   execedrin,
   LAST_MED_VALUE
} MedTypes;

enum {MSIZE = LAST_MED_VALUE};

static const double 
   pFee[LAST_MED_VALUE] = 
      {10.0, 60.00, 88.00, 3.00, 10.00}; 

#endif