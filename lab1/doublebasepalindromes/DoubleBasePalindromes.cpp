//
// Created by piotr on 02.03.17.
//

#include "DoubleBasePalindromes.h"
#include <string>

// Z racji że CMakeLists nie ma w zasięgu Palindrome.h - skopiowana metoda z zadania poprzedniego
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


// Tak samo....
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


// Metoda zamieniająca liczby na binarne
std::string convert_to_bin(int number)
{
    std::string bin = "";

    while(number > 0)
    {
        bin += std::to_string(number % 2);
        number /= 2;
    }

    return reverse(bin);
}


// Główna metoda :)
uint64_t DoubleBasePalindromes(int max_vaule_exculsive)
{
    uint64_t sum = 0;

    for(int i = 0; i <= max_vaule_exculsive; i++)
    {
        if(is_palindrome(std::to_string(i)))
        {
            if(is_palindrome(convert_to_bin(i)))
            {
                sum += i;
            }
        }
    }
    return sum;
}
