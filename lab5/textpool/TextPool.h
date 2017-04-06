//
// Created by Piotr Kucharski & Dominik Zabłotny on 30.03.17.
//

#ifndef JIMP_EXERCISES_TEXTPOOL_H
#define JIMP_EXERCISES_TEXTPOOL_H

#include <initializer_list>
#include <string>
#include <experimental/string_view>
#include <set>

namespace pool
{
    class TextPool
    {
    public:
        // Rule of Five (z usuniętą możliwością kopiowania)

        // konstruktor przenoszący
        TextPool(TextPool &&tp);

        // operator przypisania przenoszący
        TextPool &operator=(TextPool &&tp);

        // destruktor
        ~TextPool();

        // domyślny konstruktor
        TextPool();

        // konstruktor z listą inicjalizacyjną
        TextPool(std::initializer_list <std::string> text);

        std::experimental::string_view Intern(const std::string &str);
        size_t StoredStringCount() const;

    private:
        std::set <std::string> stored_words;
    };
}

#endif //JIMP_EXERCISES_TEXTPOOL_H
