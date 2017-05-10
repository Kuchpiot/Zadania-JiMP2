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
    public:
        SubtitleEndBeforeStart(int line_no, std::string line) : line_(line), lineNo_(line_no) {}
        int LineAt() const;

        const char *what() const throw() override;

    private:
        int lineNo_;
        std::string line_;
    };

    class InvalidSubtitleLineFormat : public std::exception
    {

    };

    class MissingTimeSpecification : public std::exception
    {

    };

    class OutOfOrderFrames : public std::exception, public std::invalid_argument
    {
        OutOfOrderFrames() : std::invalid_argument("Invalid argument") {}
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
