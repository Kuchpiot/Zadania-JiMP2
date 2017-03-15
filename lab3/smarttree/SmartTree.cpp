//
// Created by piotr on 14.03.17.
//

#include "SmartTree.h"

namespace datastructures
{
    std::unique_ptr <SmartTree> CreateLeaf(int value)
    {
        std::unique_ptr <SmartTree> newLeaf = std::make_unique<SmartTree>();
        newLeaf->value = value;
        return newLeaf;
    }

    std::unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree)
    {
        tree->left = std::make_unique<SmartTree>(std::move(left_subtree));
        return nullptr;
    }

    std::unique_ptr <SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree)
    {
        tree->right = std::make_unique<SmartTree>(right_subtree);
        return nullptr;
    }

    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out)
    {

    }

    std::string DumpTree(const std::unique_ptr<SmartTree> &tree)
    {

    }

    std::unique_ptr <SmartTree> RestoreTree(const std::string &tree)
    {

    }
}