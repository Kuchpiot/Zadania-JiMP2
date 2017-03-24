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
        std::string inside_pattern = pattern_;

        // Vector of changed indexes
        std::vector <int> anti_injection;

        std::string result = "";

        bool can_rewrite = true;

        std::cout << std::endl << inside_pattern << std::endl;

        // Change any word from model
        for(auto sample : model)
        {
            std::string replacement_to_find = "{{" + sample.first + "}}";

            while (inside_pattern.find( replacement_to_find ) != std::string::npos)
            {
                // Check if
                if(std::find( anti_injection.begin(), anti_injection.end(), inside_pattern.find( replacement_to_find ) ) == anti_injection.end())
                {
                    anti_injection.emplace_back( inside_pattern.find( replacement_to_find ) );
                    inside_pattern.replace( inside_pattern.find( replacement_to_find ), replacement_to_find.length(), sample.second );
                }
                else
                {

                }
            }
        }

        int a = 0;

        for(int i = 0; i < inside_pattern.length(); i++)
        {
            if(inside_pattern[i] == '{' && inside_pattern[i + 1] == '{' && inside_pattern[i + 2] != '{' &&
                    std::find( anti_injection.begin(), anti_injection.end(), i ) == anti_injection.end())
            {
                anti_injection.emplace_back(i);
                a = i;
                can_rewrite = false;
            }
            else if(inside_pattern[i - 1] == '}' && inside_pattern[i - 2] == '}' && inside_pattern[i - 3] != '}')
            {
                can_rewrite = true;
            }

            if(inside_pattern[i] == ' ' && !can_rewrite)
            {
                can_rewrite = true;
                i = a;
            }

            if(can_rewrite)
            {
                result += inside_pattern[i];
            }
        }

        std::cout << result << std::endl;

        return result;
    }


}
