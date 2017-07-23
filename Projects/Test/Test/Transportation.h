#ifndef INCL_TRANSPORTATION_HDR
#define INCL_TRANSPORTATION_HDR

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Transportation
{
   const string                  make;

public:

   Transportation() : make("Tmake") {}

   inline const string getMake() const  
                      { return make; }

};

#endif