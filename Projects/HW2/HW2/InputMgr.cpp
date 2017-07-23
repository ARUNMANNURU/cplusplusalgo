#include                                 "stdafx.h"
#include                               "InputMgr.h"
#include                                 <stdlib.h>

void InputMgr::initUI()
{
   input.days                              =     0;
   input.cO                                = false;
   for (int i=0; i<MSIZE; ++i) input.mT[i] = false;
}

const userInfo InputMgr::get()
{
            
   initUI                                       ();

   //
   // Get the handle to 
   // standard output 
   // device (the console).
   //
   HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
   system                                  ("cls");
   displayPrompts                         (screen);
   getUserInput                    (screen, input);
   //displayData                   (screen, input);

   return                                    input;

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


bool InputMgr::getMeds                   (string s)
{
   const int sz                         = s.size();
   for (int i=0; i<SSIZE; ++i) input.mT[i] =     0;

   for (int i=0; i<sz; ++i)
   {
      const char ch = s[i];
      if      (ch == 'A') input.mT[aspirin] = true;
      else if (ch == 'I') input.mT[ipecac]  = true;
      else if (ch == 'N') input.mT[novocain]= true;
      else if (ch == 'T') input.mT[tums]    = true;
      else if (ch == 'E') input.mT[execedrin]=true;
   }
 
   return                                     true;
}

/**************************************************
 *                  getSurgType                   *
 *************************************************/
bool InputMgr::getSurgType(const char t)
{
      if      (t=='A') input.sT         =    appen;
      else if (t=='T') input.sT         =    tonsl;
      else if (t=='H') input.sT         = hangnail;
      else if (t=='L') input.sT         =    lasix;
      else if (t=='N') input.sT         =  nosejob;
      else                            return false;

      return                                  true;
}

/**************************************************
 *                getUserInput                    *
 *************************************************/
void InputMgr::getUserInput
                   (HANDLE screen, userInfo &input)
{
   string                                      str;

   //
   // Get surg
   // type.
   //
   bool                                 bf = false;
   while                                      (!bf)
   {
      placeCursor                  (screen, 5, 60);
      cin >>                                   str;
      const char tc              =          str[0];
      bf                         = getSurgType(tc);
   }

   //
   // Get meds.
   //
   placeCursor                     (screen, 7, 41);
   cin >>                                      str;
   getMeds                                   (str);

   //
   // Get days.
   //
   placeCursor                     (screen, 9, 55);
   cin >>                               input.days;

   placeCursor                    (screen, 11, 55);

   cin >>                                      str;
   const char ch =                          str[0];
   input.cO      =        ((ch=='Y') || (ch=='y'));

}

/**************************************************
 *                 displayData                    *
 *************************************************/
void InputMgr::displayData
                    (HANDLE screen, userInfo input)
{
    placeCursor                    (screen, 14, 0);
    cout <<      "Here is the data you entered.\n";
    cout << "Surgery  : "     << input.sT  << endl;
    cout << "C Out    : "     << input.cO  << endl;
   cout << "Meds     : "      <<              endl;
   for(int i=0; i<MSIZE; ++i)
       cout << input.mT[i]    <<               " ";
   cout                       << endl      << endl;
}
