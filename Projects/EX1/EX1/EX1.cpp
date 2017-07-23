// EX1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include    "Car.h"

int _tmain(int argc, _TCHAR* argv[])
{

   Car c("Ford", "Mustang", 2010, 22495.0);

   const string cmake = c.make;
   const string cmodel = c.model;
   const int cyear = c.year;
   const double ccost = c.cost;

   cout << cmake + " " + cmodel + " ";
   cout << ccost;
   cout << " ";
   cout << cyear << endl;

   c.computeNewCost(3);
   const double nc = c.getNewCost();

   cout << nc << endl;

	return 0;
}

