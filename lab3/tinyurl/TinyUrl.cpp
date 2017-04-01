//
// Created by Dominik Zabłotny on 19.03.2017.
//

#include <iostream>
#include <utility>
#include <string>
#include <array>
#include <memory>
#include "TinyUrl.h"

namespace tinyurl
{

using namespace std;


    string Encode(string longUrl)
    {
        string dict = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int id = 0;
        unique_ptr<string,string> m;
        unique_ptr<int, string> idm;
        if(m.find(longUrl) != m.end()) return m[longUrl];
        string res = "";
        id++;
        int count = id;
        while(count > 0)
        {
            res = dict[count%62] + res;
            count /= 62;
        }
        while(res.size() < 6)
        {
            res = "0" + res;
        }
        m[longUrl] = res;
        idm[id] = longUrl;
        return res;
    }
    string Decode(string shortUrl)
    {
        string dict = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int id = 0;
        unique_ptr<string,string> m;
        unique_ptr<int, string> idm;
        int id = 0;
        for(int i = 0; i < shortUrl.size(); i++)
        {
            id = 62*id + (int)(dict.find(shortUrl[i]));
        }
        if(idm.find(id) != idm.end())return idm[id];
        return "";
    }
}