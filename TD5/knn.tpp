#include "knn.hpp"

KNN::KNN() {}
KNN::KNN(int _k, string _similarity_measure) : k(_k), similarity_measure(_similarity_measure) {}
KNN::~KNN() {}

int KNN::getK() const {
    return k;
}

string KNN::getSimilarityMeasure() const {
    return similarity_measure;
}

void KNN::setK(int _k) {
    k = _k;
}

void KNN::setSimilarityMeasure(string _similarity_measure) {
    similarity_measure = _similarity_measure;
}