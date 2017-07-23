#include                                   "stdafx.h"
#include                                 "InputMgr.h"
#include                                   <stdlib.h>
//
// Title: CS116 HW1
//
// Description: .cpp file for
// InputManager class.
// Modified from text.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//


const UserInfo InputMgr::get()
{
       
   //
   // Get the handle to 
   // standard output 
   // device (the console).
   //
   HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
   system                                  ("cls");
   displayPrompts                         (screen);
   const UserInfo ui = getUserInput       (screen);
   return                                       ui;

}

/**************************************************
 *                placeCursor                     *
 *************************************************/
void InputMgr::placeCursor
                  (HANDLE screen, int row, int col)
{                
   //
   // COORD is a defined C++ structure that  
   // holds a pair of X and Y coordinates
   //
   COORD                                  position;     
    position.Y                     =           row;       
    position.X                     =           col;    
   SetConsoleCursorPosition     (screen, position);
}

/**************************************************
 *                displayPrompts                  *
 *************************************************/
void InputMgr::displayPrompts       (HANDLE screen)
{
   //
   // Place the menu 
   // on the screen.
   //
   placeCursor                     (screen, 3, 25);
   cout << "******* Data Entry Form *******"  
                                           << endl;
   placeCursor                     (screen, 5, 25);
   cout << "Enter Type of Surgery(A/T/H/L/N): " 
                                           << endl;
   placeCursor                     (screen, 7, 25);
   cout << "Meds: A I N T E"               << endl;
   placeCursor                     (screen, 9, 25);
   cout << "Days in Hospital:"             << endl;
   placeCursor                    (screen, 11, 25);
   cout << "Checking out? (Y=yes):"        << endl;
}

/**************************************************
 *                getMeds                         *
 *************************************************/
bool InputMgr::getMeds   (string s, bool* const m )
{
   //
   // Get the
   // Meds entered.
   //
   const int sz                         = s.size();
   for (int i=0; i<SSIZE; ++i) m[i]     =    false;

   for (int i=0; i<sz; ++i)
   {
      const char ch                         = s[i];
      if      (ch == 'A')        m[aspirin] = true;
      else if (ch == 'I')        m[ipecac]  = true;
      else if (ch == 'N')        m[novocain]= true;
      else if (ch == 'T')        m[tums]    = true;
      else if (ch == 'E')        m[execedrin]=true;
      else 
      {
         //
         // Quit if bad
         // Med input.
         //
         cout << "Bad MedType"             << endl;
         exit                                  (0);
      }

   }
 
   return                                     true;
}

/**************************************************
 *                  getSurgType                   *
 *************************************************/
const SurgTypes InputMgr::getSurgType(const char t)
{
      if      (t=='A')              return (appen);
      else if (t=='T')               return(tonsl);
      else if (t=='H')            return(hangnail);
      else if (t=='L')               return(lasix);
      else if (t=='N')             return(nosejob);

      //
      // Quit if bad
      // Med input.
      //
      cout << "Bad SurgType"               << endl;
      exit                                     (0);

}

/**************************************************
 *                getUserInput                    *
 *************************************************/
const UserInfo InputMgr::getUserInput
                                    (HANDLE screen)
{
   string                                      str;

   //
   // Get surg
   // type.
   //
   placeCursor                     (screen, 5, 60);
   cin >>                                      str;
   const char tc                 =          str[0];
   const SurgTypes sT            = getSurgType(tc);                       

   //
   // Get meds.
   //
   placeCursor                     (screen, 7, 41);
   cin >>                                      str;
   bool                                  mb[MSIZE];
   getMeds                               (str, mb);

   //
   // Get days.
   //
   int uD;
   placeCursor                     (screen, 9, 55);
   cin >>                                       uD;

   placeCursor                    (screen, 11, 55);

   bool                                         cO;
   cin >>                                      str;
   const char ch =                          str[0];
   cO            =        ((ch=='Y') || (ch=='y'));

   //
   // Local UserInfo.
   // Copied when 
   // returned.
   // Default copy
   // constructor
   // used.
   //
   const UserInfo                  ux(mb,sT,uD,cO);
   return                                       ux;

}

