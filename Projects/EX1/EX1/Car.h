#ifndef INCL_CAR_HDR
#define INCL_CAR_HDR

#include "stdafx.h"

using namespace std;

struct Car
{
   string  make,
          model;
   int     year;
   double  cost;

   Car(string mk, string md, int y, double c)
   { make = mk; model = md; year = y; cost = c; }

   void computeNewCost(const int yr);

   inline const double getNewCost() { return 0.0; }

};

#endif