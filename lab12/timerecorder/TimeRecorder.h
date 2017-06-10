//
// Created by zabdomi on 05.06.17.
//

#ifndef JIMP_EXERCISES_TIMERECORDER_H
#define JIMP_EXERCISES_TIMERECORDER_H


#include <utility>
#include <chrono>

namespace profiling
{

    template <class T>
    std::pair<T, double> TimeRecorder(T* obj)
    {
        auto start = std::chrono::high_resolution_clock::now();

        auto v = obj();

        auto end = std::chrono::high_resolution_clock::now() - start;

        auto time = std::chrono::duration_cast<std::chrono::milliseconds>(end);

        return std::pair<T,double>(v, time.count());
    };
}



#endif //JIMP_EXERCISES_TIMERECORDER_H
