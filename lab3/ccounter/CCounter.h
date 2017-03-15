//
// Created by piotr on 14.03.17.
//

#ifndef JIMP_EXERCISES_CCOUNTER_H
#define JIMP_EXERCISES_CCOUNTER_H

#include <string>
#include <memory>
#include <map>

namespace ccounter
{
    struct Counter
    {
        std::map<std::string, int> counterMap;
    };

    std::unique_ptr<ccounter::Counter> Init();

    void Inc(std::string key, std::unique_ptr<ccounter::Counter> *counter);

    int Counts(const std::unique_ptr<ccounter::Counter> &counter, std::string key);

    void SetCountsTo(std::string key, int value, std::unique_ptr<ccounter::Counter> *counter);
}

#endif //JIMP_EXERCISES_CCOUNTER_H