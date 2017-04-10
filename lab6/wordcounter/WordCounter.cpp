//
// Created by piotr on 06.04.17.
//

#include <algorithm>
#include "WordCounter.h"

namespace datastructures
{
    // WORD

    std::string Word::GetWord() const
    {
        return _word;
    }

    bool Word::operator ==(const Word &w2) const
    {
        return this->_word == _word;
    }

    Word& Word::operator=(Word&& w2)
    {
        _word = w2._word;
    }

    Word::Word(const Word &w2)
    {
        _word = w2._word;
    }

    bool Word::operator<(const Word &w2) const
    {
        return this->_word < w2._word;
    }

    bool Word::operator>(const Word &w2) const
    {
        return this->_word > w2._word;
    }


    // COUNTS

    int Counts::GetAmount()
    {
        return _amount;
    }

    Counts::Counts(const Counts& c2)
    {
        this->_amount = c2._amount;
    }

    void Counts::SetAmount(int a)
    {
        _amount = a;
    }

    void Counts::Increment()
    {
        _amount++;
    }

    bool Counts::operator==(const Counts &c2) const
    {
        return this->_amount == c2._amount;
    }

    Counts::operator int() const
    {
        return _amount;
    }

    // WORD COUNTER

    WordCounter::WordCounter()
    {
        _wordCounterPairs = std::vector < std::pair <Word, Counts> > ();
    }

    WordCounter::WordCounter(std::string FileName)
    {

    }

    WordCounter::WordCounter(const std::initializer_list <Word> &words)
    {
        for (auto &&item : words)
        {
            bool has_word = false;

            for (auto &&pai : _wordCounterPairs)
            {
                if(pai.first.GetWord() == item.GetWord())
                {
                    has_word = true;
                    pai.second.Increment();
                    break;
                }
            }

            if(!has_word)
            {
                _wordCounterPairs.insert(_wordCounterPairs.end(), std::pair <Word, Counts> (item, Counts(1)));
            }

        }
    }

    unsigned long WordCounter::DistinctWords()
    {
        return _wordCounterPairs.size();

    }

    unsigned long WordCounter::TotalWords()
    {
        int i = 0;
        for (auto &&item : _wordCounterPairs)
        {
            i += item.second;
        }

        return i;
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

    Counts WordCounter::operator[](std::string pos)
    {
        for (auto &&item : _wordCounterPairs)
        {
            if(item.first.GetWord() == pos)
            {
                return item.second;
            }
        }

        return 0;
    }
}