//
// Created by piotr on 23.05.17.
//

#ifndef JIMP_EXERCISES_LOGGER_H
#define JIMP_EXERCISES_LOGGER_H

#include <string>

template <class T>
class Logger
{
public:
    void Debug(T param);

    void Info(T param);

    void Warning(T param);

    void Error(T param);

    std::ostream &operator<< (std::ostream& output);

    std::istream &operator>> (std::istream& input);

private:
    std::string buffer_;
};


#endif //JIMP_EXERCISES_LOGGER_H
