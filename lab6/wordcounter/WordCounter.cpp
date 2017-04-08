//
// Created by piotr on 06.04.17.
//

#include <algorithm>
#include "WordCounter.h"

namespace datastructures
{
    // WORD

    std::string Word::GetWord()
    {
        return _word;
    }

    bool Word::operator ==(const Word &w2) const
    {
        return (this->_word == _word) ? true : false;
    }


    // COUNTS

    int Counts::GetAmount()
    {
        return _amount;
    }

    void Counts::SetAmount(int a)
    {
        _amount = a;
    }

    void Counts::Increment()
    {
        _amount++;
    }


    // WORD COUNTER

    WordCounter::WordCounter()
    {
        _wordCounterPairs = std::vector < std::pair <Word, Counts> > ();
    }

    WordCounter::WordCounter(std::string FileName)
    {

    }

    WordCounter::WordCounter(std::initializer_list <Word> words)
    {
        _distinctWords = words.size();
        for (auto &&item : words)
        {
//            if(std::find(_wordCounterPairs.begin(), _wordCounterPairs.end(), item) != _wordCounterPairs.end())
//            {
//
//            }

            bool has_word = false;

            for (auto &&pair : _wordCounterPairs)
            {
                if(pair.first == item)
                {
                    has_word = true;
                    pair.second.Increment();
                    break;
                }
            }

            if(!has_word)
            {
                std::pair <Word, Counts> newElement = std::pair <Word, Counts> (item, 1);
                _wordCounterPairs.insert(_wordCounterPairs.end(), newElement);
            }
        }
    }

    unsigned long WordCounter::DistinctWords()
    {
        return _distinctWords;
    }

    unsigned long WordCounter::TotalWords()
    {
        return _wordCounterPairs.size();
    }

    std::set <Word> WordCounter::Words()
    {
        std::set <Word> words_stored;

        for (auto &&item :_wordCounterPairs)
        {
            words_stored.insert(words_stored.end(), item.first);
        }

        return words_stored;
    }


}