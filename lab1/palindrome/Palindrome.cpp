//
// Created by piotr on 01.03.17.
//

#include "Palindrome.h"

bool is_palindrome(std::string str)
{
    const char *characters = str.c_str();
    size_t size = str.length();
    int j = 0;

    for(int i = size - 1; i >= 0; i--)
    {
        if(characters[i] != characters[j])
        {
            return false;
        }

        j++;
    }

    return true;

}