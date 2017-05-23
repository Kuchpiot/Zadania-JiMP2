//
// Created by piotr on 23.05.17.
//

#include "Mean.h"

static T Mean::countMean(std::vector<T> vec)
{
    T sum;

    for (auto &&item : vec)
    {
        sum += item;
    }

    return sum / vec.size();
}
