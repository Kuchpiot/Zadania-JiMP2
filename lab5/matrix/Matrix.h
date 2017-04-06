//
// Created by Dominik Zabłotny & Piotr Kucharski on 02.04.2017.
//

#ifndef LAB5_MATRIX_H
#define LAB5_MATRIX_H

#include <complex>

namespace algebra
{

    class Matrix
    {

    private:

        int size_row;
        int size_col;
        std::complex<double> **tab;

        const char *matlab;
        std::string mat = matlab;


    public:

        //metody

        std::istringstream print();

        Matrix add(Matrix m);

        Matrix sub(Matrix m);

        Matrix mul(Matrix m);

        void div(Matrix m);

        void pow(int power);

        std::pair<int, int> Size();

        //konstruktory

        Matrix(const std::string matlab);

        Matrix(int, int); //konstruktor z wielkosciami macierzy
        Matrix(const Matrix &matrix); //konstruktor kopiujący
        Matrix(const char *); //kostruktor przyjmujący const char*
        ~ Matrix(); //destruktor

    };

}
#endif //LAB5_MATRIX_H
