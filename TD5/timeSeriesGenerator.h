#ifndef TIME_SERIES_GENERATOR_H
#define TIME_SERIES_GENERATOR_H

#include <vector>
#include <iostream>

using namespace std;

class TimeSeriesGenerator {
    public:
        TimeSeriesGenerator();
        TimeSeriesGenerator(int);

        virtual vector<double> generateTimeseries(int) const = 0;
        static void printTimeSeries(const vector<double>);

    private:
        int seed;
};

#endif