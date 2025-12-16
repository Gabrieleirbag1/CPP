#ifndef KNN_H
#define KNN_H

#include <vector>
#include <string>

using namespace std;

class KNN {
    public:
        KNN();
        KNN(int, string);
        ~KNN();

        int getK() const;
        string getSimilarityMeasure() const;

        void setK(int);
        void setSimilarityMeasure(string);

    private:
        int k;
        string similarity_measure;
};

#include "knn.tpp"

#endif