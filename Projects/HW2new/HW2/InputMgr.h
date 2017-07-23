#ifndef              INPUTMGR_INCL_H
#define              INPUTMGR_INCL_H

// This program uses a screen input form to get information
// from the user.
#include <iostream>      
#include <windows.h>      // Needed to set cursor positions
#include <string>

#include "Pharmacy.h"
#include "Surgery.h"

using namespace std;

enum {PPLEN = 5};

struct userInfo
{	
   bool mT[PPLEN];
   SurgTypes   sT;
   int       days;
   bool        cO;
};

class InputMgr
{
   const static double pp[PPLEN];
   bool getSurgType(const char t);
   bool getMeds(string s);
   void  initUI();
   void placeCursor(HANDLE, int, int);   // Function prototypes
   void displayPrompts(HANDLE);
   void getUserInput(HANDLE, userInfo&);
   void displayData (HANDLE, userInfo);
public:
	userInfo input;
   const userInfo get();

};

#endif