//
// Created by piotr on 11.04.17.
//

#include <cmath>
#include "ArrayFill.h"

namespace arrays
{

    int UniformFill::Value(int index) const
    {
        if (_value != -1)
            return _value;
        if (_step != -1)
            return _start + index * _step;
        if (_a != -1)
            return _a * pow(index, 2) + _b;

        return rand();

    }

}