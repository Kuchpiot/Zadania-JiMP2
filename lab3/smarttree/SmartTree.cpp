//
// Created by piotr on 14.03.17.
//

#include <sstream>
#include <vector>
#include <iterator>
#include <iostream>
#include "SmartTree.h"
#include <regex>

namespace datastructures
{
    std::unique_ptr <SmartTree> CreateLeaf(int value)
    {
        auto newLeaf = std::make_unique <SmartTree> (value, nullptr, nullptr);
        return newLeaf;
    }

    std::unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree)
    {
        // The power of constructor
        auto newPtr = std::make_unique <SmartTree> (tree->value, std::move(left_subtree), std::move(tree->right));
        return newPtr;
    }

    std::unique_ptr <SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree)
    {
        auto newPtr = std::make_unique <SmartTree> (tree->value, std::move(tree->left), std::move(right_subtree));
        return newPtr;
    }

    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out)
    {
        // Let's do this recursively :D
        if(unique_ptr != nullptr)
        {
            PrintTreeInOrder(unique_ptr->left, out);
            *out << unique_ptr->value << ", ";
            PrintTreeInOrder(unique_ptr->right, out);
        }
    }

    std::string DumpTree(const std::unique_ptr<SmartTree> &tree)
    {
        return tree != nullptr ?
               "[" + std::to_string(tree->value) + " " + DumpTree(tree->left) + " " + DumpTree(tree->right) + "]"
               : "[none]";
    }

    std::unique_ptr <SmartTree> RestoreTree(const std::string &tree)
    {
        // [99 [100 [1234 [none] [none]] [4321 [none] [none]]] [88 [897 [none] [none]] [761 [none] [none]]]]

        std::istringstream iss(tree);
        std::vector <std::string> values{std::istream_iterator<std::string>{iss},
                                         std::istream_iterator<std::string>{}};
        std::string left = "";
        std::string right = "";

        std::string *writer = &left;

        std::string substring = values[0].substr(1, values[0].size());

        if(substring[0] != 'n')
        {
            int value = std::stoi(values[0].substr(1, values[0].size()));

            values.erase(values.begin());

            for(auto s : values)
            {
                writer->append(s + " ");
                if(s.find_last_of("]") - s.find_first_of("]") >= 3)
                {
                    writer = &right;
                }
            }

            auto newTree = std::make_unique<SmartTree>(value, RestoreTree(left), RestoreTree(right));
            return newTree;
        }
        else
        {
            return nullptr;
        }
    }


}