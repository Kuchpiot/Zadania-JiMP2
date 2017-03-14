//
// Created by Dominik Zabłotny on 11.03.2017.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Polybius.h"
#include <vector>

int main(char* inputFileName, char* outputFileName, int mode)
{
    ifstream myfile(inputFileName);

    if(myfile.is_open())
    {
        char sign;
        while(myfile>>sign)
        {
            cout<<sign;
        }
    }
    else
    {
        cout << "Can't open file!";
    }

    cin.get();

    if (mode == 0)
    {
        PolybiusDecrypt();
    }
    else
    {
        PolybiusCrypt();
    }

    int len=sign.size();
    encode(sign,len);

    return 0;
}
