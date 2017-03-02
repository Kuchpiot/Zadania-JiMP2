//
// Created by piotr on 02.03.17.
//

#include <iostream>
#include "MultiplicationTable.h"

void MultiplicationTable(int tab[][10])
{
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            tab[i][j] = i * j;
        }
    }
}

void printTable(int tab[][10])
{
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            std::cout << tab[i][j];
        }
    }
}