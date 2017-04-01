//
// Created by piotr on 30.03.17.
//

#include "TextPool.h"

namespace pool
{
    // Rule of Five (z usuniętą możliwością kopiowania)
    // konstruktor przenoszący
    TextPool::TextPool(TextPool &&tp) : stored_words()
    {
        std::swap(stored_words, tp.stored_words);
    }

    // operator przypisania przenoszący
    TextPool& TextPool::operator=(TextPool &&tp)
    {
        if(this == &tp)
        {
            return tp;
        }

        stored_words = {};
        std::vector <std::string> temp;

        std::swap(temp, tp.stored_words);

        for(auto &s : temp)
        {
            if(std::find(stored_words.begin(), stored_words.end(), s) == stored_words.end())
            {
                stored_words.insert(stored_words.end(), s);
            }
        }

        temp.clear();
    }

    // destruktor
    TextPool::~TextPool()
    {

    }

    // domyślny konstruktor
    TextPool::TextPool()
    {
        stored_words = std::vector <std::string>();
    }

    // konstruktor z listą inicjalizacyjną
    TextPool::TextPool(std::initializer_list <std::string> text)
    {
        for (auto &element : text)
        {
            if (std::find(stored_words.begin(), stored_words.end(), element) == stored_words.end())
            {
                stored_words.insert(stored_words.end(), element);
            }
        }
    }



    std::experimental::string_view TextPool::Intern(const std::string &str)
    {
        if(stored_words.size() == 0 || std::find(stored_words.begin(), stored_words.end(), str) == stored_words.end())
        {
            stored_words.insert(stored_words.end(), str);
            return stored_words.at(stored_words.size());
        }
        else
        {
            return *std::find(stored_words.begin(), stored_words.end(), str);
        }

    }

    size_t TextPool::StoredStringCount() const
    {
        return stored_words.size();
    }
}