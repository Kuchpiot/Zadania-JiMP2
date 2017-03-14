//
// Created by piotr on 13.03.17.
//

#include "XorCypherBreaker.h"
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>


std::string XorCypherBreaker(const std::vector<char> &cryptogram,
                             int key_length,
                             const std::vector<std::string> &dictionary)
{
    std::string key = "123";
    std::string newCryptogram = "";
    bool hasSpace = false;
    int amountOfWords = 0;
    int z = 0;

    // All these fors are for checking all key options (all 26^3 cases...)

    for(char i = 'a'; i <= 'z'; i++)
    {
        for(char j = 'a'; j <= 'z'; j++)
        {
            for(char k = 'a'; k <= 'z'; k++)
            {
                // Let's set the key
                key[0] = i;
                key[1] = j;
                key[2] = k;

                std::cout << key << std::endl;

                // Every time newCryptogram has to be set to none to add text
                newCryptogram = "";
                int index = 0;

                // This for decrypts the message by default C++ XOR function (^) by every key letter
                for(auto s : cryptogram)
                {
                    newCryptogram += s^key[index % 3];
                    index++;
                }

                // Change all characters to lowercase
                std::transform(newCryptogram.begin(), newCryptogram.end(), newCryptogram.begin(), ::tolower);


                // Automatic searching for word in dictionary. 2 words and space means the message was decrypted

                // Extract words into list
                std::istringstream iss(newCryptogram);
                std::vector<std::string> words {std::istream_iterator<std::string>{iss},
                                                std::istream_iterator<std::string>{}};
                auto last = std::unique(words.begin(), words.end());
                words.erase(last, words.end());

                // Search for word in dictionary
                for(auto s : words)
                {
                    if (std::find(dictionary.begin(), dictionary.end(), s) != dictionary.end())
                    {
                        amountOfWords++;
                        std::cout << s << std::endl;
                    }
                }

                // Check if the message was decrypted
                if(amountOfWords >= 220)
                {
                    return key;
                }

                iss.clear();
                words.clear();
            }
        }
    }
    return "No key found.";
}