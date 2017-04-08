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
        std::string GetWord();
        bool operator ==(const Word &w2) const;

    private:
        const std::string _word;
    };


    class Counts
    {
    public:
        Counts(int a) : _amount(a) {}
        int GetAmount();
        void SetAmount(int a);
        void Increment();

    private:
        int _amount;

    };


    class WordCounter
    {
    public:
        WordCounter();
        WordCounter(std::string FileName);
        WordCounter(std::initializer_list <Word> words);

        unsigned long DistinctWords();
        unsigned long TotalWords();
        std::set <Word> Words();

    private:
        std::vector < std::pair <Word, Counts> > _wordCounterPairs;
        unsigned long _distinctWords;
    };

}

#endif //JIMP_EXERCISES_WORDCOUNTER_H
