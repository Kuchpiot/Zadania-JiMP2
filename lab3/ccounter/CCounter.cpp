//
// Created by Piotr Kucharski on 14.03.17.
//

#include "CCounter.h"

namespace ccounter
{
    std::unique_ptr<ccounter::Counter> Init()
    {
        return std::make_unique<ccounter::Counter>();
    }

    void Inc(std::string key, std::unique_ptr<ccounter::Counter> *counter)
    {
        // If there isnt any object , add it
        if(counter->get()->counterMap.find(key) != counter->get()->counterMap.end())
        {
            counter->get()->counterMap.find(key)->second++;
        }
        else
        {
            counter->get()->counterMap.emplace(key, 1);
        }
    }

    int Counts(const std::unique_ptr<ccounter::Counter> &counter, std::string key)
    {
        return (counter.get()->counterMap.find(key) != counter.get()->counterMap.end()) ? counter.get()->counterMap.find(key)->second : 0;
    }

    void SetCountsTo(std::string key, int value, std::unique_ptr<ccounter::Counter> *counter)
    {
        counter->get()->counterMap.find(key)->second = value;
    }
}