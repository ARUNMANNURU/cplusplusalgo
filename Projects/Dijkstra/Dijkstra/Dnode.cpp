
#include "stdafx.h"
#include "DNode.h"

void DNode::testNode(const int n, const int d)
{
   if (d<this->dst)
   {
      bI=n;
      dst = d;
   }
}
