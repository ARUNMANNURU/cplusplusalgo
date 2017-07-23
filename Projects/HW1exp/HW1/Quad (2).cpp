#include "stdafx.h"
#include "cs114h1.h"
#include "stdlib.h"

#include <cmath>

const RSType roots( const double a,  const double b, const double c, const double eps)
{

    typedef struct
    {
        ResultType    result;
        double*           x1; 
        double*           x2;
    } RSType2;

	RSType2               rs;

    const double disc  =              b*b - 4*a*c;
	const int sdbl     =           sizeof(double);
	const double otwoa =                1.0/(2*a);

	if (disc>eps)
	{
	    rs.result   =                        real;
		const double sdisc =           sqrt(disc);
	    rs.x1       =      (double*) malloc(sdbl);
	    rs.x1[0]    =        (-b + sdisc) * otwoa;
	    rs.x2       =      (double*) malloc(sdbl);
	    rs.x2[0]    =        (-b - sdisc) * otwoa;
	}
	else if (abs(disc)<=eps)
	{
	    rs.result   =                      single;
	    rs.x1       =      (double*) malloc(sdbl);
	    rs.x1[0]    =                  -b * otwoa;
	    rs.x2  = 0;
	}
	else
	{
	    rs.result          =              complex;
		const double sdisc =          sqrt(-disc);
	    const int sdbl2    =              2* sdbl;
		const double mbota =           -b * otwoa;
		const double dtot  =        sdisc * otwoa;
	    rs.x1       =     (double*) malloc(sdbl2);
	    rs.x1[0]    =                       mbota;
		rs.x1[1]    =                        dtot;
	    rs.x2       =     (double*) malloc(sdbl2);
	    rs.x2[0]    =                       mbota;
	    rs.x2[1]    =                       -dtot;
	}

	return (RSType&) rs;
}

void printit(const RSType rs)
{
	if (rs.result==single)
		printf        (" Single: %f\n", rs.x1[0]);
	else if (rs.result==real)
		printf
		   (" Real: %f, %f\n", rs.x1[0],rs.x2[0]);
	else
		printf        (" Complex: %f %fi, %f %fi", 
		                        rs.x1[0],rs.x1[1],
	                           rs.x2[0],rs.x2[1]);
}

void freeit(const RSType rs)
{
	free                          ((void*) rs.x1);
	if (rs.result!=single)   free ((void*) rs.x2);
}



