//
// Created by piotr on 08.05.17.
//

#ifndef JIMP_EXERCISES_MOVIESUBTITLES_H
#define JIMP_EXERCISES_MOVIESUBTITLES_H

#include <string>
#include <sstream>

namespace moviesubs
{
    // EXCEPTIONS

    class NegativeFrameAfterShift : public std::exception
    {

    };

    class SubtitleEndBeforeStart : public std::exception
    {

    };

    class InvalidSubtitleLineFormat : public std::exception
    {

    };

    class MissingTimeSpecification : public std::exception
    {

    };

    class OutOfOrderFrames : public std::exception
    {

    };

    // MAIN CLASS

    class MovieSubtitles
    {
    public:
        virtual void ShiftAllSubtitlesBy(int delay, int framerate, std::stringstream *input, std::stringstream *output) {}
    };

    class MicroDvdSubtitles : public MovieSubtitles
    {
    public:
        void ShiftAllSubtitlesBy(int delay, int framerate, std::stringstream *input, std::stringstream *output);
    };

    class SubRipSubtitles : public MovieSubtitles
    {
    public:
        void ShiftAllSubtitlesBy(int delay, int framerate, std::stringstream *input, std::stringstream *output);
    };

}

#endif //JIMP_EXERCISES_MOVIESUBTITLES_H
