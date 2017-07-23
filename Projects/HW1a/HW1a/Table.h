#ifndef TABLE_INCL_H
#define TABLE_INCL_H
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
// Size of
// table.
//
enum                         {TSIZE=5};

//
// The encapsulated
// table.
//
typedef  double    Ttype[TSIZE][TSIZE];

//
// Private function.
//
static void setAll    (const double x);

//
// Initialize the
// table so that
// the entries 
// are set to
// t.
//
void initialize        (const Ttype t);

//
// Initialize the
// table so that
// all entries 
// are set to
// s.
//
void initializeC     (const double x);

//
// Add s 
// to all 
// entries in
// the table.
//
void addC             (const double s);

//
// Add the
// values of
// t to the
// table.
//
void add               (const Ttype t);

//
// Subtract s 
// from all 
// entries in
// the table.
//
void minusC           (const double s);

//
// Subtract the
// values of
// t from the
// table.
//
void minus             (const Ttype t);

//
// Multiply
// all entries
// of the
// table by
// s.
//
void multC            (const double s);

//
// Get the 
// Value at
// Table(i,j).
//
const double 
         get(const int i, const int j);

//
// Set the
// value at
// Table(i,j) 
// to v.
//
void put
(  
   const int                         i, 
   const int                         j,
   const double                      v           
);

//
// Zero all
// entries
// of the
// table.
//
void                            zero();

//
// Print out
// the contents
// of the table
// to std::out.
//
void output                         ();

#endif