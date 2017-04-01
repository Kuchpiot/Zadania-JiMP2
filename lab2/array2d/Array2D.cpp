//
// Created by piotr on 07.03.17.
//

#include "Array2D.h"

int **Array2D(int n_rows, int n_columns)
{
    int **newArray = new int*[n_rows];

    for(int i = 0; i < n_rows; i++)
    {
        newArray[i] = new int[n_columns];
    }

    int iterator = 1;

    for(int i = 0; i < n_rows; i++)
    {
        for(int j = 0; j < n_columns; j++)
        {
            newArray[i][j] = iterator;
            iterator++;
        }
    }

    return newArray;
}


void DeleteArray2D(int **array, int n_rows, int n_columns)
{
    for(int i = 0; i < n_rows; i++)
    {
        delete [] array[i];
    }

    delete [] array;
}