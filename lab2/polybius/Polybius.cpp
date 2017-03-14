//
// Created by Dominik Zabłotny on 11.03.2017.
//

#include "Polybius.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

const char encoder[5][5] = {{'A','B','C','D','E'},
                            {'F','G','H','I','K'},
                            {'L','M','N','O','P'},
                            {'Q','R','S','T','U'},
                            {'V','W','X','Y','Z'}};

void position(char p, int& r, int& c)
{
    if (p < 'J')
    {
        r = (p - 65) / 5;
        c = (p - 65) % 5;
    }
    else if (p > 'J')
    {
        r = (p - 66) / 5;
        c = (p - 66) % 5;
    }
    return;
}

void row(int r, vector<char>& code, int c1, int c2)
{
    code.push_back(encoder[r][(c1 + 4) % 5]);
    code.push_back(encoder[r][(c2 + 4) % 5]);
    return;
}

void column(int c, vector<char>& code, int r1, int r2)
{
    code.push_back(encoder[(r1 + 4) % 5][c]);
    code.push_back(encoder[(r2 + 4) % 5][c]);
    return;
}

string encode(vector<char> signx, int len)
{
    vector<char> code;
    string returned = "";
    int i = 0, j = 0;
    int r1, c1, r2, c2;
    while (i < len)
    {
        position(signx[i], r1, c1);
        i++;
        position(signx[i], r2, c2);
        if (r1 == r2)
        {
            row(r1, code, c1, c2);
        }
        else if(c1 == c2)
        {
            column(c1, code, r1, r2);
        }
        i++;
    }
    for (j = 0;j < code.size();j++)
    {
        if (code[j] == 'X')
            continue;
        returned.append(&code[j]);
    }
    return returned;
}

string PolybiusCrypt(string message)
{
    vector<char> chars;

    for(int i = 0; i < message.length(); i++)
    {
        chars.push_back(message[i]);
    }

    return encode(chars, message.length());
}