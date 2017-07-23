#ifndef QUAD_INCL_H
#define QUAD_INCL_H
//
// Title: CS116 HW1
//
// Description: Header for
// HW 1.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

//
// Enums (typdefed)
// for result.
//
typedef enum 
{
   real, 
   complex, 
   single,
   error
}                  ResultType;

//
// Structure (typedefed)
// for results.
//
struct RSType
{
   const ResultType    result;
   const double* const     x1; 
   const double* const     x2;
}                      ;

//
// Returns result
// for a, b and c
// input.
//
const RSType roots
( 
   const double             a,  
   const double             b, 
   const double             c, 
   const double           eps
);

//
// Function to 
// print
// results.
//
void printit(const RSType rs);


//
// Function to
// free any
// allocated 
// memory.
//
void freeit (const RSType rs);

#endif