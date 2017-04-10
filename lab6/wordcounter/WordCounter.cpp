//
// Created by piotr on 06.04.17.
//

#include <algorithm>
#include "WordCounter.h"
#include <fstream>

namespace datastructures
{
    //------------------------------------------------------------------------------------------------------------- WORD

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


    //----------------------------------------------------------------------------------------------------------- COUNTS

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

    void Counts::Decrement()
    {
        _amount--;
    }

    Counts &Counts::operator++()
    {
        ++_amount;
        return *this;
    }

    bool Counts::operator<(const Counts &c2) const
    {
        return this->_amount < c2._amount;
    }

    bool Counts::operator>(const Counts &c2) const
    {
        return this->_amount > c2._amount;
    }

    Counts &Counts::operator++(int)
    {
        ++_amount;
        return *this;
    }

    //----------------------------------------------------------------------------------------------------- WORD COUNTER

    WordCounter::WordCounter()
    {
        _wordCounterPairs = std::list < std::pair <Word, Counts> > ();
    }

    WordCounter::WordCounter(std::string FileName)
    {
        std::fstream input_file(FileName, std::ios::in);

        if(!input_file.is_open())
        {
            return;
        }

        std::string tmp;

        while(!input_file.eof())
        {
            input_file >> tmp;
            for(int i = 0 ; i < tmp.length(); i++)
            {
                if(!isalnum(tmp[i]))
                {
                    tmp = tmp.substr(0, i);
                }
            }

            bool has_word = false;

            for (auto &&pai : _wordCounterPairs)
            {
                if(pai.first.GetWord() == tmp)
                {
                    has_word = true;
                    pai.second.Increment();
                    break;
                }
            }

            if(!has_word)
            {
                _wordCounterPairs.emplace_back(Word(tmp), Counts(1));
            }

        }
        input_file.close();

        (*_wordCounterPairs.end()).second.Decrement();
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
                _wordCounterPairs.emplace_back(item, Counts(1));
            }

        }
    }

    unsigned long WordCounter::DistinctWords()
    {
        return _wordCounterPairs.size();
    }

    int WordCounter::TotalWords()
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

    bool compare(const std::pair<Word, Counts>& p1, const std::pair<Word, Counts> &p2)
    {
        return p1.second > p2.second;
    }

    std::ostream &operator<<(std::ostream &os, WordCounter &wc)
    {
        wc._wordCounterPairs.sort(compare);

        //Distinct, Total, lista
        os << wc.DistinctWords() << std::endl;
        os << wc.TotalWords() << std::endl;

        for (auto &&item : wc._wordCounterPairs)
        {
            os << item.first.GetWord() << " " << item.second << std::endl;
        }

        return os;
    }
}