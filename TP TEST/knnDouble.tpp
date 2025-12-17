#include "knnDouble.hpp"

template <typename T>
KNNDouble<T>::KNNDouble() : KNN<T>() {}

template <typename T>
KNNDouble<T>::KNNDouble(int _k) : KNN<T>(_k) {}

template <typename T>
double KNNDouble<T>::similarityMeasure(
    T& a,
    T& b
) const {
    vector<double> A = a.getFeatures();
    vector<double> B = b.getFeatures();
    return euclideanDistance(A, B);
}

template <typename T>
double KNNDouble<T>::euclideanDistance(
    const vector<double>& distance1,
    const vector<double>& distance2
) const {
    double sum = 0.0;
    for (size_t i = 0; i < distance1.size(); ++i) {
        double diff = distance1[i] - distance2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}
