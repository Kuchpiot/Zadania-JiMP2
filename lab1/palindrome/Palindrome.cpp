//
// Created by piotr on 01.03.17.
//

#include "Palindrome.h"
#include "ReverseString.h"
#include <string>

bool is_palindrome(std::string str)
{
    if(reverse(str) == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}