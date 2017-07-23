// Dijkstra.cpp : Defines the entry point for the console application.
//

#include                  "stdafx.h"
#include                  "Vertex.h"
#include                    "GrDB.h"
#include                   "DNode.h"
#include                   <fstream>

int _tmain(int argc, _TCHAR* argv[])
{
   using namespace                         std;
   GrDB gd;

   const int n = gd.nI();
   ofstream                            oout;
   oout.open                  ("Graph.txt");

   for (int i =0; i<n; ++i)
   {
      oout << i << endl;
      const Vertex& v = gd.getAt(i);

      const DNode dn(v);

      const int nE = v.getNE();

      for (int j = 0; j<nE; ++j)
      {
           const int e = v.getEdge(j);
           oout << e << " ";
           if (i==e)
           {
              cout <<
                "ERROR  In Node generation" 
                 << i << endl;
         //     exit(0);
           }

      }
      oout << endl;

      for (int j = 0; j<nE; ++j)
           oout << v.getWt(j) << " ";
      oout << endl << endl;

   }

      oout.close();

	return 0;
}

