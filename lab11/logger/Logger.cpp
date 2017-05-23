//
// Created by piotr on 23.05.17.
//

#include "Logger.h"

void Logger::Debug(T param)
{
    buffer_ << param;
}

void Logger::Info(T param)
{
    buffer_ << param;
}

void Logger::Warning(T param)
{
    buffer_ << param;
}

void Logger::Error(T param)
{
    buffer_ << param;
}

std::ostream& Logger::operator<< (std::ostream& output)
{
    output << buffer_;
    return output;
}

std::istream& Logger::operator>> (std::istream& input)
{
    input >> buffer_;
    return input;
}