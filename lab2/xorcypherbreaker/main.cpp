//
// Created by piotr on 07.03.17.
//

#include "XorCypherBreaker.h"
#include <fstream>
#include <iostream>

int main()
{
//    std::ifstream encryptedFile("/home/piotr/Uczelnia/JiMP2/zadania/Lab1/lab2/xorcypherbreaker/p059_cipher1.txt", std::ios_base::out | std::ios_base::in);
//    int readFromFile;
//    std::vector<std::string> dictionary {"the","of"};
//    char x;
//    std::vector<char> cryptogram;
//
//
//    if(!encryptedFile.good())
//    {
//        std::cout << "Cannot open the file!";
//    }
//
//    while(encryptedFile >> readFromFile)
//    {
//        x = readFromFile;
//        auto it = cryptogram.begin();
//        cryptogram.insert(it, x);
//    }
//
//    encryptedFile.close();
//
//   // XorCypherBreaker(cryptogram, 3, dictionary);
//
//    std::string lel = "123";
//    int a = std::atoi(lel.c_str());
//
//    std::cout << a;

    std::cout << Xor(995, 1) << std::endl;
    return 0;
}