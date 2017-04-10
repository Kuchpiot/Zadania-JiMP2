//
// Created by piotr on 06.04.17.
//

#ifndef JIMP_EXERCISES_WORDCOUNTER_H
#define JIMP_EXERCISES_WORDCOUNTER_H

#include <string>
#include <utility>
#include <set>
#include <vector>

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

        bool operator==(const Counts &c2) const;
        operator int() const;

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

    private:
        std::vector < std::pair <Word, Counts> > _wordCounterPairs;
    };

}

#endif //JIMP_EXERCISES_WORDCOUNTER_H
