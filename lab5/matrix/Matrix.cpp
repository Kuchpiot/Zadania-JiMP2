//
// Created by Dominik Zabłotny & Piotr Kucharski on 04.04.2017.
//

#include <iostream>
#include <vector>
#include "Matrix.h"

namespace algebra
{
//metody

    std::istringstream Matrix::print()
    {
        std::istringstream result;
        for (int i = 0; i < size_row; ++i)
        {
            for (int j = 0; j < size_col; ++j)
            {
                result >> tab[i][j];
            }
        }

        return result;
    }

    Matrix Matrix::add(Matrix m)
    {
        Matrix result(size_row, size_col);
        int i, j;
        for (i = 0; i < size_row; i++)
        {
            for (j = 0; j < size_col; j++)
            {
                result.tab[i][j] = m.tab[i][j] + tab[i][j];
            }

        }
        return result;
    }

    Matrix Matrix::sub(Matrix m)
    {
        Matrix result(size_row, size_col);
        int i, j;
        for (i = 0; i < size_row; i++)
        {
            for (j = 0; j < size_col; j++)
            {
                result.tab[i][j] = m.tab[i][j] - tab[i][j];
            }

        }
        return result;
    }

    Matrix Matrix::mul(Matrix m)
    {
        Matrix result(size_row, size_col);
        int i, j, k;
        for (i = 0; i < size_row; i++)
            for (j = 0; j < size_col; j++)
                result.tab[i][j] = 0;
        for (i = 0; i < size_row; i++)
            for (j = 0; j < size_row; j++)
                for (k = 0; k < size_col; k++)
                    result.tab[i][j] = result.tab[i][j] + m.tab[i][k] * tab[k][j];

        return result;
    }

    void Matrix::div(Matrix m)
    {

    }

    void Matrix::pow(int power)
    {
        int i, j;
        for (int i = 0; i < size_col; i++)
        {
            for (int j = 0; j < size_row; j++)
            {
                std::pow(tab[i][j], power);
            }
        }
    }

//konstruktory

    Matrix::Matrix(int size_row, int size_col)
    {
        tab = new std::complex<double> *[size_row];

        for (int i = 0; i < size_row; i++)
        {
            tab[i] = new std::complex<double>[size_col];
        }

    }

    Matrix::Matrix(const Matrix &matrix) : size_col(0), size_row(0)
    {
        size_row = matrix.size_row;
        size_col = matrix.size_col;
    }

    Matrix::Matrix(const char *m) : size_col(0), size_row(0)
    {
        matlab = m;
    }

    Matrix::~ Matrix()
    {
        for (int i = 0; i < sizeof(tab) / sizeof(tab[0]); i++)
        {
            delete[] tab[i];
        }
        delete[] tab;
    }

    Matrix::Matrix(const std::string matlab)
    {
        std::vector<std::string> value_list;
        std::string value;
        int i = 1;
        int row = 0;
        int column = 0;

        while (matlab[i] != ']')
        {
            if (matlab[i] != ' ')
            {
                value += matlab[i];
            }
            else
            {
                value_list.insert(value_list.end(), value);
                value = "";
            }
            i++;
        }

        value_list.insert(value_list.end(), value);
        std::cout << value << std::endl;

        //Check amount of columns

        for (auto item : value_list)
        {
            if (item.find(';') == item.npos)
            {
                column++;
            }
            else
            {
                item = item.substr(0, item.find(';'));
                column++;
                row++;
            }

            std::cout << column << ": " << item << std::endl;
        }
        row++;

        // Create the matrix

        this->size_row = row;
        this->size_col = column;

        tab = new std::complex<double> *[row];

        for (i = 0; i < row; ++i)
        {
            tab[i] = new std::complex<double>[row];
        }

        // Assign value

        auto element = value_list.begin();

        for (i = 0; i < size_row; ++i)
        {
            for (int j = 0; j < size_col; ++j)
            {
                if ((*element).find('i') != (*element).npos)
                {
                    std::string re = (*element).substr(0, (*element).find('i'));
                    std::string im = (*element).substr((*element).find('i'));

                    tab[i][j] = (std::stod(re), std::stod(im));
                }
                else
                {
                    tab[i][j] = (std::stod(*element), 0);
                }
            }
        }
    }

    std::pair<int, int> Matrix::Size()
    {
        return std::pair<int, int>(size_row, size_col);
    };

}