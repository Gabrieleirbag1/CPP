#ifndef KNN_DOUBLE_H
#define KNN_DOUBLE_H

#include "knn.hpp"
#include <vector>
#include <cmath>

template <typename T>
class KNNDouble : protected KNN<T> {
    public:
        KNNDouble();
        KNNDouble(int);

        double similarityMeasure(
            T& a,
            T& b
        ) const override;

        double euclideanDistance(
            const vector<double>& distance1,
            const vector<double>& distance2
        ) const;
};

#include "knnDouble.tpp"

#endif