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
// Function
// selection
// enum.
//
typedef enum
{
   SETALL,
   INIT,
   INITC,
   ADD,
   ADDC,
   MINUS,
   MINUSC,
   MULTC,
   GET,
   PUT,
   ZERO,
   OUTPUT
} AccessCode;

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
static void initialize  (const Ttype t);

//
// Initialize the
// table so that
// all entries 
// are set to
// s.
//
static void initializeC    
                       (const double x);

//
// Add s 
// to all 
// entries in
// the table.
//
static void addC        (const double s);

//
// Add the
// values of
// t to the
// table.
//
static void add         (const Ttype t);

//
// Subtract s 
// from all 
// entries in
// the table.
//
static void minusC     (const double s);

//
// Subtract the
// values of
// t from the
// table.
//
static void minus       (const Ttype t);

//
// Multiply
// all entries
// of the
// table by
// s.
//
static void multC      (const double s);

//
// Get the 
// Value at
// Table(i,j).
//
static const double 
         get(const int i, const int j);

//
// Set the
// value at
// Table(i,j) 
// to v.
//
static void                         put
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
static void                      zero();

//
// Print out
// the contents
// of the table
// to std::out.
//
static void output                   ();

//
// Accessor 
// function.
//
void accessTable
(
   const AccessCode                  aC,
   const int                         i1,
   const int                         i2,
   const double                      d1,
         double&                     d2,
   const Ttype                       t1
);


#endif