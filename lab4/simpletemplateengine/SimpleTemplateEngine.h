//
// Created by piotr on 22.03.17.
//

#ifndef JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H
#define JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H

#include <string>
#include <unordered_map>

namespace nets
{
    class View
    {
    public:
        View(std::string pattern);

        std::string Render(const std::unordered_map <std::string, std::string> &model) const;

    private:
        std::string pattern_;
    };
}

#endif //JIMP_EXERCISES_SIMPLETEMPLATEENGINE_H
