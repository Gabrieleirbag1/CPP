#include "timeSeriesGenerator.h"

TimeSeriesGenerator::TimeSeriesGenerator() {}

TimeSeriesGenerator::TimeSeriesGenerator(int _seed): seed(_seed) {}

void TimeSeriesGenerator::printTimeSeries(const vector<double> element) {
    for (const auto& val : element) {
        cout << val << " ";
    }
    cout << endl;
}