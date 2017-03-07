
#include "Factorial.h"

int GetFactorial(int value)
{
    if (value < 0) {
        GetFactorial(-value);
    } else if (value == 0) {
        return 1;
    } else {
        return GetFactorial(value - 1) * value;
    }
}
