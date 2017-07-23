#include "stdafx.h"
#include "Car.h"

int _tmain(int argc, _TCHAR* argv[])
{

   Car c("Dodge","Dart",2002,1000);

   //
   // Call getMake in 
   // base.
   //
   const string x1 = c.Transportation::getMake();

   //
   // Call getMake() in
   // derived object.
   //
   const string x2 =                 c.getMake();

   cout << x1 << " " << x2 << endl;

	return 0;
}

