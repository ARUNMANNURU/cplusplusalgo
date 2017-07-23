#include                     "stdafx.h"
#include                   "UserInfo.h"
//
// Title: CS116 HW1
//
// Description: .cpp for
// UserInfo class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

UserInfo::UserInfo
(
   const bool*                    m, 
   const SurgTypes                s, 
   const int                      d, 
   const bool                     c
) :            sT(s), days(d), cO(c)
{

   //
   // Convert array
   // to individual
   // elements so copy
   // will work using
   // default copy
   // constructor.
   //

   tumS          =          m[tums];
   ipeS          =        m[ipecac];
   aspS          =       m[aspirin];
   novS          =      m[novocain];
   exeS          =     m[execedrin];
}