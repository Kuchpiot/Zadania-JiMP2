//
// Created by piotr on 14.03.17.
//

#include "SmartTree.h"

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
        auto newTree = std::make_unique<SmartTree>();
    }
}