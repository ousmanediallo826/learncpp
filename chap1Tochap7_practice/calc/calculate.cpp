
#include "calcutil.h"


int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b) 
{
    
    return static_cast<double>(a) / b;
}

int remainder(int a, int b)
{
   
    return a % b;
}