//
// Created by piotr on 08.05.17.
//

#include <iostream>
#include <vector>
#include "MovieSubtitles.h"
#include <regex>

namespace moviesubs
{

    void SubRipSubtitles::ShiftAllSubtitlesBy(int delay, int framerate, std::stringstream *input,
                                              std::stringstream *output)
    {
        std::regex expression ("(\\d\\d\\:\\d\\d\\:\\d\\d\\,\\d\\d\\d)", std::regex::ECMAScript);
        std::smatch m;
        std::string input_string = input->str();

        while (std::regex_match(input_string, m, expression));
        for (auto &&item : m)
        {
            std::cout << "Item: " << item.str() << std::endl;
            *output << item.str();
        }
    }

    void MicroDvdSubtitles::ShiftAllSubtitlesBy(int delay, int framerate, std::stringstream *input,
                                                std::stringstream *output)
    {

        bool isRewriting = false;
        std::string number = "";

        for (unsigned long i = 0; i < input->str().length(); ++i)
        {
            if (input->str().at(i) == '{')
            {
                isRewriting = true;
                *output << input->str().at(i);
                continue;
            }
            else if (input->str().at(i) == '}')
            {

                number = std::to_string(std::stoi(number) + ((delay * framerate) / 1000));

                *output << number;
                isRewriting = false;

                number = "";
            }

            if(isRewriting)
            {
                if (std::isalpha(input->str().at(i)))
                {
                    throw InvalidSubtitleLineFormat();
                }
                else
                {
                    number += (input->str().at(i));
                }
            }
            else
            {
                *output << input->str().at(i);
            }
        }
    }
}
