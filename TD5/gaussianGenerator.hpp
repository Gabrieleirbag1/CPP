#ifndef GAUSSIAN_GENERATOR_H
#define GAUSSIAN_GENERATOR_H

#include "timeSeriesGenerator.hpp"
#include <cmath>

class GaussianGenerator : public TimeSeriesGenerator {
    public:
        GaussianGenerator();
        GaussianGenerator(int);

        vector<double> generateTimeseries(int) const override;

        double getMoyenne() const;
        double getEcartType() const;

        void setMoyenne(double);
        void setEcartType(double);

    private:
        double moyenne;
        double ecartType;
};

#include "gaussianGenerator.tpp"

#endif