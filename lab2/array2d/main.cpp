//
// Created by piotr on 07.03.17.
//

#include "Array2D.h"
#include <iostream>

int main()
{
    int rows, columns;

    std::cout << "Enter amount of rows: ";
    std::cin >> rows;
    std::cout << "Enter amount of columns: ";
    std::cin >> columns;

    int **array = Array2D(rows, columns);



    DeleteArray2D(array, rows, columns);

    return 0;
}