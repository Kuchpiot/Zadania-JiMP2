//
// Created by piotr on 07.03.17.
//

#include "XorCypherBreaker.h"
#include <algorithm>
#include <iostream>

using std::find;
using std::vector;
using std::string;


std::string ReverseString(std::string str)
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

std::string convertToBinary(int number)
{
    std::string bin = "";

    while(number > 0)
    {
        bin += std::to_string(number % 2);
        number /= 2;
    }

    return ReverseString(bin);
}

int convertToDec(std::string number)
{
    int s = number.length() - 1;
    int result = 0;
    int n = 0;

    while(s >= 0)
    {
        result += (number[s] - 48) * pow(2, n);
        n++;
        s--;
    }


    return result;
}

int Xor(int firstNumber, int secondNumber)
{
    std::string firstNumberBinString = convertToBinary(firstNumber);
    std::string secondNumberBinString = convertToBinary(secondNumber);
    std::string result = "";


    while(firstNumberBinString.length() > secondNumberBinString.length())
    {
        secondNumberBinString.insert(0, 1, '0');
    }
    while(firstNumberBinString.length() < secondNumberBinString.length())
    {
        firstNumberBinString.insert(0, 1, '0');
    }


    int i = 0;


    while(firstNumberBinString[i] != NULL || secondNumberBinString[i] != NULL)
    {
        if((firstNumberBinString[i] != secondNumberBinString[i]))
        {
            result.append("1");
        }
        else
        {
            result.append("0");
        }
        i++;
    }


    return convertToDec(result);
}

//std::string XorCypherBreaker(const std::vector<char> &cryptogram,
//                             int key_length,
//                             const std::vector<std::string> &dictionary)
//{
//    std::string key = "";
//    for(int i = 0; i < key_length; i++)
//    {
//        key += "a";
//    }
//    char letter = 'a';
//    int index = 0;
//
//
//    for(int k = 0; k < pow(26, key_length); k++)
//    {
//        key[index] = letter;
//
//        int i = 0;
//        std::string newCryptogram = "";
//        int amountOfWords = 0;
//        std::string word = "";
//        bool hasSpace = true;
//
//        std::cout << std::endl << "Checking key: " << key << std::endl;
//
//        for (auto s : cryptogram)
//        {
//            // przechodzi po każdym z tych literek i robi xor dla kazdego potem porownuje z dictionary
//            newCryptogram += Xor(s, key[i]);
//
//            if (i == key_length - 1)
//            {
//                i = 0;
//            } else
//            {
//                i++;
//            }
//        }
//
//        i = 0;
//        std::cout << "After newCryptogram make" << std::endl;
//
//        while(newCryptogram[i] != NULL)
//        {
//            if(newCryptogram[i] == ' ')
//            {
//                hasSpace = false;
//            }
//            i++;
//        }
//
//        i = 0;
//
//        // Przejdz po wszystkich literach, wylap slowa, jesli dlugosc pojedynczego slowa bedzie rowna calosci to zle
//        // a jak nie to rozwazaj (bo jest spacja!)
//        while (hasSpace != true)
//        {
//            std::cout << "Enter to check next word" << std::endl;
//
//            while (newCryptogram[i] != ' ' || newCryptogram[i] != '\0')
//            {
//                word += newCryptogram[i];
//                i++;
//            }
//            if (word.size() == newCryptogram.size())
//            {
//                hasSpace = true;
//            }
//            else if (std::find(dictionary.begin(), dictionary.end(), word) != dictionary.end())
//            {
//                amountOfWords++;
//            }
//            if (newCryptogram[i] == '\0')
//            {
//                break;
//            }
//        }
//
//        if (amountOfWords >= 2)
//        {
//            return key;
//        }
//        else
//        {
//            letter += 1;
//        }
//
////        if(letter == '{' && index != 2)
////        {
////            key[index] = 'a';
////            letter = 'a';
////            index++;
////        }
////        else if(letter == '{' && key[0] != 'z' && index == 2)
////        {
////            index = 0;
////            key[index]++;
////            letter = 'a';
////        }
////        else if(letter == '{' && key[0] == 'z' && index == 2)
////        {
////            key[1] = 'a';
////
////        }
//
//        key =
//    }
//
//}

std::string XorCypherBreaker(const std::vector<char> &cryptogram,
                             int key_length,
                             const std::vector<std::string> &dictionary)
{
    

}
