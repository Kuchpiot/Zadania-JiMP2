
#include "Factorial.h"

int factorial(int value)
{
    if(value < 0)
    {
        factorial( -value );
    }
    else if(value == 0)
    {
        return 1;
    }
    else
    {
        return factorial( value-1 ) * value;
    }
}
