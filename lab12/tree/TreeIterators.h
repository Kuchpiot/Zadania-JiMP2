//
// Created by piotr on 10.06.17.
//

#ifndef JIMP_EXERCISES_TREEITERATORS_H
#define JIMP_EXERCISES_TREEITERATORS_H

#include <bits/unique_ptr.h>
#include <vector>

namespace tree
{
    template <class T>
    class Tree
    {
    public:
        void Insert(T newVal)
        {
            if(!value_)
            {
                value_ = newVal;
            }
            else if(newVal <= value_)
            {
                if(!left_)
                {
                    left_ = std::unique_ptr<Tree> (newVal);
                }
                else
                {
                    left_->Insert(newVal);
                }
            }
            else
            {
                if(!right_)
                {
                    right_ = std::unique_ptr<Tree> (newVal);
                }
                else
                {
                    right_->Insert(newVal);
                }
            }
        }

        Tree() {}
        Tree(int v) : value_{v} {}

        inline T Root() const { return value_; }

        inline std::unique_ptr<Tree> GetLeft() { return left_; }
        inline std::unique_ptr<Tree> GetRight() { return right_; }

        operator int() { return int(value_); }

    private:
        T value_ = nullptr;
        std::unique_ptr<Tree> left_ = nullptr;
        std::unique_ptr<Tree> right_ = nullptr;
    };

    template <class T>
    std::vector<T> InOrder(Tree<T> tr)
    {
        std::vector<T> vals;
        vals.push_back(InOrder(*tr.GetLeft()));
        vals.push_back(tr.Root());
        vals.push_back(InOrder(*tr.GetRight()));
        return vals;
    }

    template <class T>
    class InOrderTreeIterator
    {
    public:
        InOrderTreeIterator(Tree<T> r) : node_{r} {}

        T operator *() const { return node_.Root(); }
        void operator ++() { node_ = *(node_.GetLeft()); }

        Tree<T> getNode() { return node_; } const

        bool operator !=(InOrderTreeIterator<T>& sec) const
        {
            return node_.Root() != sec.getNode().Root();
        }

    private:
        Tree<T> node_;
    };

    template <class T>
    class InOrderTreeView
    {
    public:
        InOrderTreeView(Tree<T> tr)
        {
            InOrder(tr);
        }

        inline InOrderTreeIterator<T> begin() { return values_[0]; }
        inline InOrderTreeIterator<T> end() { return values_[values_.size() - 1]; }

        inline void AddToValues(T v)
        {
            values_.push_back(v);
        }

    private:
        std::vector<T> values_;
    };


}

#endif //JIMP_EXERCISES_TREEITERATORS_H
