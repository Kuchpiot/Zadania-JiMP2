//
// Created by piotr on 23.05.17.
//

#include "Mean.h"

#include <iostream>
#include <complex>

int main()
{
    std::vector <int> intVec {1, 2, 3, 4, 5};
    std::vector <double> doubleVec {1.1, 1.2, 1.3, 1.4, 1.5};
    std::vector <std::complex> complexVec {(1, 1), (1, 2), (1, 3), (1, 4), (1, 5)};

    std::cout << Mean<int>::countMean(intVec) << std::end;
    std::cout << Mean<double>::countMean(doubleVec) << std::end;
    std::cout << Mean<std::complex>::countMean(complexVec) << std::end;

    return 0;

}
