#ifndef INCL_CAR_HDR
#define INCL_CAR_HDR

#include <iostream>
#include <iomanip>
#include <string>
//
// Title: CS116 EX2
//
// Description: .h for
// Car class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//
using namespace std;

class Car
{
   const string    make;
   const string   model;
   const int       year;
   const double    cost;
         double newCost;

public:

   Car(const string mk, const string md, 
       const int y,     const double c) :
     make(mk), model(md), year(y), cost(c), newCost(c)
     {}

   void computeNewCost(const int yr);

   //
   // < operator

   const bool operator<               (const Car& c2)  const;

   inline const double getNewCost() const { return newCost; }
   inline const double getCost()    const   {  return cost; }
   inline const    int getYear()    const   {  return year; }
   inline const string getMake()    const   {  return make; }
   inline const string getModel()   const   { return model; }


};

#endif