#ifndef               SURGTYPES_INCL_H
#define               SURGTYPES_INCL_H

typedef enum 
{
   appen,
   tonsl,
   hangnail,
   lasix,
   nosejob
}                         SurgTypes;

enum            {SSIZE = nosejob+1};

//
// Fees for
// SurgTypes.
//
static const double sFee[SSIZE] = 
{
                             1000.0, 
                             600.00, 
                              88.00, 
                             300.00, 
                            1290.00
}; 

#endif