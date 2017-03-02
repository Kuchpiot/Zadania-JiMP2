//
// Created by kuchpiot on 28.02.17.
//

#include "ReverseString.h"
#include <string>
#include <iostream>

std::string reverse(std::string str)
{
    const char *characters = str.c_str(); //uzyskanie z obiektu string wskaźnika na poszczególne znaki
    size_t size = str.size(); //uzyskanie z obiektu string ilości znaków
    std::string reversed_characters = "";

    for(int i = size - 1; i >= 0; i--)
    {
        reversed_characters += characters[i];
    }

//utworzenie nowego obiektu string na podstawie innego char*, char[], itp..
    return std::string(reversed_characters);
}
