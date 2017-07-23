#ifndef                 USERINFO_INCL_H
#define                 USERINFO_INCL_H
#include                  "SurgTypes.h"
#include                   "MedTypes.h"
//
// Title: CS116 HW1
//
// Description: .h for
// UserInfo class.
// 
// Company: NJIT Fall 2012
//
// Author Bill Phillips (214-36-930)
// Version 1.0
//

class UserInfo
{
  
   //
   // Using default
   // copy constructor
   // so no arrays.
   //
   const SurgTypes                  sT;
   const int                      days;
   const bool                       cO;

   //
   // One bool
   // for each
   // MedType so
   // the DEFAULT 
   // copy constructor
   // can be used.
   //
   bool                           aspS;
   bool                           tumS;
   bool                           novS;
   bool                           ipeS;
   bool                           exeS;

public:

   UserInfo
   (
      const bool*                    m, 
      const SurgTypes                s, 
      const int                      d, 
      const bool                     c
   );

   inline const bool getAS() const
                        {return aspS;}

   inline const bool getTS() const
                        {return tumS;}

   inline const bool getNS() const
                        {return novS;}

   inline const bool getIS() const
                        {return ipeS;}

   inline const bool getES() const
                        {return exeS;}

   inline const SurgTypes getST() const
                          {return sT;}

   inline const int getDays() const
                        {return days;}

   inline const bool getCO() const
                          {return cO;}

   //
   // Whenever this 
   // gets deleted
   // print a
   // message.
   // Uncomment to
   // see it.
   //
   //~UserInfo()
   //{ 
   //   std::cout << 
   //      "UserInfo object deleted"  
   //                   << std::endl;
   //}

};

#endif