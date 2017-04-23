//
// Created by piotr on 23.04.17.
//

#include "Shape.h"

#include <vector>
#include <ctime>
#include <cstdlib>

int main()
{
    srand(time(NULL));
    std::vector <Ksztalt*> shapes;

    for (int i = 0; i < 10; ++i)
    {
        switch(rand()%3)
        {
            case 0:
                shapes.push_back(new Trojkat);
                break;

            case 1:
                shapes.push_back(new Kwadrat);
                break;

            case 2:
                shapes.push_back(new Kolo);
        }
    }

    for (auto &&item : shapes)
    {
        item->rysuj();
        std::cout << "------------------------------\n" << std::endl;
    }

    // Następuje polimorfizm i każdy z utworzonych obiektów wywołuje odpowiednią dla siebie wersję metody rysuj()
    // w efekcie uzyskujemy narysowane różne kształty na ekranie.

    return 0;
}
