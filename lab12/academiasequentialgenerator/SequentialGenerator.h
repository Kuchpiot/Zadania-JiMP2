//
// Created by piotr on 10.06.17.
//

#ifndef JIMP_EXERCISES_SEQUENTIALGENERATOR_H
#define JIMP_EXERCISES_SEQUENTIALGENERATOR_H


template <class T, class R>
class SequentialIdGenerator
{
public:
    SequentialIdGenerator(R i = 0) : index_{i} {}

    T NextValue()
    {
        T obj(index_);
        ++index_;
        return obj;
    }

private:
    R index_;
};



#endif //JIMP_EXERCISES_SEQUENTIALGENERATOR_H
