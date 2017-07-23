#ifndef                 INPUTMGR_INCL_H
#define                 INPUTMGR_INCL_H
#include                   "UserInfo.h"
#include                     <iostream>      
#include                    <windows.h>      
#include                       <string>
#include                   "MedTypes.h"
#include                  "SurgTypes.h"
//
// Title: CS116 HW1
//
// Description: .h file for
// InputManager class.
// Modified from text.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//
// This program uses 
// a screen input form to get information
// from the user.


using namespace                    std;

enum                   {PPLEN = MSIZE};

class InputMgr
{
   const static double       pp[PPLEN];
   const SurgTypes 
             getSurgType(const char t);
   bool getMeds
            (string s, bool* const m );
   void  placeCursor(HANDLE, int, int);  
   void         displayPrompts(HANDLE);
   const UserInfo getUserInput(HANDLE);

public:

   const UserInfo                get();

};

#endif