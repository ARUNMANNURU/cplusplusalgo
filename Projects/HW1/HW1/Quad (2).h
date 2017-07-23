


typedef enum 
{
	real, 
	complex, 
	single
} ResultType;

typedef struct
{
   const ResultType    result;
   const double* const     x1; 
   const double* const     x2;
} RSType;

const RSType roots( const double a,  const double b, const double c, const double eps);

void printit(const RSType rs);

void freeit(const RSType rs);