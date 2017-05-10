

#include <iostream>
#include <vector>
#include "MovieSubtitles.h"

namespace moviesubs
{

    void SubRipSubtitles::ShiftAllSubtitlesBy(int delay, int framerate, std::stringstream *input,
                                              std::stringstream *output)
    {
        // Don't have to do
    }

    bool replace(std::string& str, const std::string& from, const std::string& to) {
        size_t start_pos = str.find(from);
        if(start_pos == std::string::npos)
            return false;
        str.replace(start_pos, from.length(), to);
        return true;
    }

    void MicroDvdSubtitles::ShiftAllSubtitlesBy(int delay, int framerate, std::stringstream *input,
                                                std::stringstream *output)
    {
        // Check for input correctness
        if(framerate < 0)
        {
            throw std::invalid_argument("Invalid framerate");
        }

        // Local variables - tmp for storing frame number from string, vectors to replace frames in string
        std::string tmp;
        std::vector <int> frames;
        std::vector <int> new_frames;

        // Catch all frames numbers and put them to the vector as int
        while(std::getline(*input, tmp, '{') && std::getline(*input, tmp, '}'))
        {
            // Check tmp string for existance of letters
            for (auto &&letter : tmp)
            {
                if(std::isalpha(letter))
                {
                    throw InvalidSubtitleLineFormat();
                }
            }

            // Check negativity of frame
            if(std::stoi(tmp) < 0)
            {
                throw InvalidSubtitleLineFormat();
            }

            // Add to vector correct frame number
            frames.push_back(std::stoi(tmp));
        }

        // Check if there is even number of frames if not, throw error
        if(frames.size() % 2 != 0)
        {
            throw InvalidSubtitleLineFormat();
        }

        // Change all frames
        for (auto &&item : frames)
        {
            new_frames.push_back(item + ((delay * framerate) / 1000));

            // Check for negativity of frame
            if(item < 0)
            {
                throw NegativeFrameAfterShift();
            }
        }

        // Check all frames
        for (unsigned long i = 0; i < new_frames.size() - 1; i += 2)
        {
            if(new_frames[i + 1] - new_frames[i] < 0)
            {
                std::string line;
                int k = 0;

                // Get line that is required
                for(int j = 0; j < ((i/2) + 1); j++)
                {
                    line = "";

                    while(input->str().at(k) != '\n')
                    {
                        line += input->str().at(k);
                        k++;
                    }

                    k++;
                }

                throw SubtitleEndBeforeStart((i / 2) + 1, line);
            }

            // Check for negativity of frame after shift
            if(new_frames[i] < 0)
            {
                throw NegativeFrameAfterShift();
            }
        }

        // Write new version to output
        std::string newString = input->str();

        for (unsigned long l = 0; l < new_frames.size(); l++)
        {
            // Usage of defined replace function above
            replace(newString, std::to_string(frames[l]), std::to_string(new_frames[l]));
        }

        *output << newString;
    }

    int SubtitleEndBeforeStart::LineAt() const
    {
        return lineNo_;
    }

    const char *SubtitleEndBeforeStart::what() const throw()
    {
        // This works but I have no clue why on tests it shows bad result :(
        std::string m = "At line " + std::to_string(lineNo_) + ": " + line_;
        std::cout << m.c_str() << std::endl;

        return m.c_str();
    }




}
