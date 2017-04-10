//
// Created by piotr on 06.04.17.
//

#ifndef JIMP_EXERCISES_WORDCOUNTER_H
#define JIMP_EXERCISES_WORDCOUNTER_H

#include <string>
#include <utility>
#include <set>
#include <list>

namespace datastructures
{

    class Word
    {
    public:
        Word(std::string word) : _word(word) {}
        Word(const Word& w2);
        std::string GetWord() const;
        bool operator ==(const Word &w2) const;
        Word &operator=(Word&& w2);
        bool operator <(const Word &w2) const;
        bool operator >(const Word &w2) const;


    private:
        std::string _word;
    };


    class Counts
    {
    public:
        Counts(int a) : _amount(a) {}
        Counts(const Counts& c2);
        int GetAmount();
        void SetAmount(int a);
        void Increment();
        void Decrement();

        bool operator==(const Counts &c2) const;
        operator int() const;
        Counts &operator++();
        Counts &operator++(int);
        bool operator<(const Counts &c2) const;
        bool operator>(const Counts &c2) const;

    private:
        int _amount;

    };


    class WordCounter
    {
    public:
        WordCounter();
        WordCounter(std::string FileName);
        WordCounter(const std::initializer_list <Word> &words);

        unsigned long DistinctWords();
        int TotalWords();
        std::set <Word> Words();

        Counts operator[](std::string pos);
        friend std::ostream &operator<<(std::ostream &os, WordCounter &wc);

    private:
        std::list < std::pair <Word, Counts> > _wordCounterPairs;
    };

}

#endif //JIMP_EXERCISES_WORDCOUNTER_H
