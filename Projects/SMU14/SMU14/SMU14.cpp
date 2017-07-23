#include "stdafx.h" // Remove if not Visual C++

#include <time.h>
int main(int argc, char* argv[])
{

    //
    // Define constants that don't need to be stored,
    // as enums.
    //
    enum { ADDENDS    = 8000000 }; // number of points
    enum { LOWER      =       1 }; // lower bound.
    enum { UPPER      =       2 }; // upper bound.
    enum { DEBUG      =       0 }; // set to 0 for 
                                   //   time and sum only.

    //
    // Create the required floating point constants.
    //
    const long double lower      =                 (long double)LOWER;
    const long double upper      =                 (long double)UPPER;
    const long double increment  = (upper-lower)/(long double)ADDENDS;
 
    //
    // Create calculation storage.
    //
    double   sum = 0;
    double   x   = (long double)lower;
    int      i;

    const clock_t t0 = clock();    // start the clock.

    //
    // This is the interesting part of the algorithm.  I 
    // disreagrd the rest as it's inconsequential, more
    // operating system dependent, and I could make a lot 
    // of it go away at the cost of clarity.
    //
    for (i=0; i < ADDENDS; ++i) 
    { 
        sum += 1.0F/x;

        //
        // I did the more "expensive," "multiply every 
        // time" approach instead of "x += increment"
        // This "tightens up" the last x-value such that
        // incrementing one more (by replacing < with <=)
        // makes x end right on target.  Over large numbers
        // of iterations the error builds up to the point 
        // where you undershoot when you repeatedly
        // increase x by increment each iteration.
        //
        x   =  lower + (long double)i * increment;
    }

    const clock_t t = clock()-t0; // stop the clock.              

    //
    // Interesting values.
    //
    if (DEBUG) 
    {
        printf("upper =     %30.20f    \n", upper);
        printf("lower =     %30.20f    \n", lower);
        printf("increment = %30.20f\n", increment);
        printf("final x   = %30.20f\n\n",x);

    }       

    //
    // Always output time and sum.
    //
    printf("time in Ms = %f\n",(double)t/CLOCKS_PER_SEC*1000);

    printf("sum = %30.10f\n\n", sum);

    return 0;

}


