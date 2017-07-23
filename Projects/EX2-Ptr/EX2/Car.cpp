
#include "stdafx.h"
#include "Car.h"


const bool 
      Car::operator<(const Car& r) const
{

   //
   // This Car is
   // < r if this
   // cost is less than
   // r's.  If costs are
   // equal then this
   // Car is less than
   // r if this year is 
   // less than r's.
   //
   const double lCost = this->getCost();
   const double rCost =     r.getCost();
   if (lCost != rCost) 
                 return (lCost < rCost);

   const int lYear   =  this->getYear();
   const int rYear   =      r.getYear();

   return               (lYear < rYear);

}

void Car::computeNewCost  (const int yr) 
{
   //
   // Compute 
   // delta
   //
   const int             dY = year - yr;

   //
   // If error
   // do nothing.
   //
   if(dY <= 0)                   return;

   //
   // Compute
   // the new
   // cost.
   //
   const int t              =  year + 9;
   if(dY > t)             newCost = 0.0; 
   else
      newCost = cost -  cost * dY * 0.1;

   return;

}

