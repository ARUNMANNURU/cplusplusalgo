#include "stdafx.h"

void keep_window_open() 
{ 
    // clear buffer 
    fflush(stdin); 
    printf("\n\nPlease enter RETURN to exit\n"); 
    char ch; 
    ch = getchar(); 
    return; 
} 
