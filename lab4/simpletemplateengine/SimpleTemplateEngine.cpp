//
// Created by piotr on 22.03.17.
//

#include "SimpleTemplateEngine.h"
#include <regex>
#include <iostream>

namespace nets
{
    View::View(std::string pattern)
    {
        this->pattern_ = pattern;
    }

    std::string View::Render(const std::unordered_map <std::string, std::string> &model) const
    {
        // Rewrite pattern_ to be changed
        std::string result = pattern_;

        // Change any word from model
        for(auto sample : model)
        {
            std::string replacement_to_find = "{{" + sample.first + "}}";

            while (result.find(replacement_to_find) != std::string::npos)
            {
                result.replace(result.find(replacement_to_find), replacement_to_find.length(), sample.second);
            }
        }

        // Finding any non changed words
        std::regex expression {R"((.+)?\{\{\w+\}\}(.+)?)"};
        std::smatch matches;

        if(std::regex_match(result, matches, expression))
        {
            std::cout << matches[1] << std::endl;
            result.erase();

            for(int i = 1; i < matches.size(); i++)
            {
                result.append(matches[i].str());
            }
        }

        return result;
    }


}
