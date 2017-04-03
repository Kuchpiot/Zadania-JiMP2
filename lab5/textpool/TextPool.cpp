//
// Created by piotr on 30.03.17.
//

#include "TextPool.h"

namespace pool
{
    // Rule of Five (z usuniętą możliwością kopiowania)

    // konstruktor przenoszący
    TextPool::TextPool(TextPool &&tp)
    {
        //std::swap(stored_words, tp.stored_words);
        stored_words = std::move(tp.stored_words);
    }

    // operator przypisania przenoszący
    TextPool& TextPool::operator=(TextPool &&tp)
    {
        if(this == &tp)
        {
            return tp;
        }

        stored_words = std::set <std::string> ();

        std::swap(stored_words, tp.stored_words);
    }

    // destruktor
    TextPool::~TextPool()
    {
        stored_words.clear();
    }

    // domyślny konstruktor
    TextPool::TextPool()
    {
        stored_words = std::set <std::string> ();
    }

    // konstruktor z listą inicjalizacyjną
    TextPool::TextPool(std::initializer_list <std::string> text)
    {
        for (auto &element : text)
        {
            stored_words.insert(element);
        }
    }

    std::experimental::string_view TextPool::Intern(const std::string &str)
    {
        if(stored_words.find(str) == stored_words.end())
        {
            stored_words.insert(str);
        }

        return *stored_words.find(str);
    }

    size_t TextPool::StoredStringCount() const
    {
        return stored_words.size();
    }
}