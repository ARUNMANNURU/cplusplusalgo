
#ifndef               MEDTYPES_INCL_H
#define               MEDTYPES_INCL_H


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

static const double pFee[LAST_MED_VALUE] = {10.0, 60.00, 88.00, 3.00, 10.00}; 

#endif