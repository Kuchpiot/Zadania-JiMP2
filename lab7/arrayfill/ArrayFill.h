//
// Created by piotr on 11.04.17.
//

#ifndef JIMP_EXERCISES_ARRAYFILL_H
#define JIMP_EXERCISES_ARRAYFILL_H

#include <vector>
#include <iostream>

namespace arrays
{
    class VectorFill
    {
    public:
        virtual int Value(int index) const = 0;
    };

    class UniformFill : public VectorFill
    {
    public:
        UniformFill(int value = 0) : _value{value} {}
        UniformFill(int start, int stop, int step = 1) : _start{start}, _stop{stop}, _step{step} {}
        UniformFill(int a, int b) : _a{a}, _b{b} {}
        UniformFill() {}
        virtual int Value(int index ) const override ;

    private:
        int _value = -1;
        int _start;
        int _stop;
        int _step = -1;
        int _a = -1;
        int _b = -1;
    };

    void FillArray(size_t size, UniformFill *filler, std::vector<int> *tab )
    {
        tab->clear();
        tab->reserve(size);
        for(size_t i = 0; i < size; i++)
        {
            tab->emplace_back(filler->Value(i));
        }
    }

}

#endif //JIMP_EXERCISES_ARRAYFILL_H
