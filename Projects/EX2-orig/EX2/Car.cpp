
#include "stdafx.h"
#include "Car.h"

void Car::computeNewCost
             (const int yr) 
{
   //
   // Compute 
   // delta
   //
   const int dY = year - yr;

   //
   // If error
   // do nothing.
   //
   if(dY <= 0)       return;

   //
   // Compute
   // the new
   // cost.
   //
   const int t  =  year + 9;
   if(dY > t) newCost = 0.0; 
   else
   {
      newCost = cost - 
            cost * dY * 0.1;
   }
   return;

}

