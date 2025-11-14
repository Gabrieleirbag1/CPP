#include <vector>
#include <ostream>

#ifndef MATRIX_BASE_H
#define MATRIX_BASE_H

using namespace std;

template <typename T>
class MatrixNumerical
{
public:
    MatrixNumerical();

    vector<T, T> data;
    size_t rows;
    size_t cols;

    void addElement(size_t row, size_t col);
    vector<T, T> getElement(size_t row, size_t col) const;
    size_t getRows() const;
    size_t getCols() const;

    ostream &display(ostream &os) const;
};

#include "matrix_base.tpp"

#endif