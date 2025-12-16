#include "timeSeriesDataset.h"
#include <cmath>

TimeSeriesDataset::TimeSeriesDataset() {}
TimeSeriesDataset::TimeSeriesDataset(bool _znormalise, bool _isTrain, vector<double> _data, vector<int> _labels, int _maxLength, int _numberOfSamples) :
    znormalise(_znormalise), isTrain(_isTrain), data(_data), labels(_labels), maxLength(_maxLength), numberOfSamples(_numberOfSamples) {}

bool TimeSeriesDataset::getZnormalise() const {
    return znormalise;
}
bool TimeSeriesDataset::getIsTrain() const {
    return isTrain;
}
vector<double> TimeSeriesDataset::getData() const {
    return data;
}
vector<int> TimeSeriesDataset::getlabels() const {
    return labels;
}
int TimeSeriesDataset::getMaxLength() const {
    return maxLength;
}
int TimeSeriesDataset::getNumberOfSamples() const {
    return numberOfSamples;
}
void TimeSeriesDataset::setZnormalise(bool _znormalise) {
    znormalise = _znormalise;
}
void TimeSeriesDataset::setIsTrain(bool _isTrain) {
    isTrain = _isTrain;
}
void TimeSeriesDataset::setData(vector<double> _data) {
    data = _data;
}
void TimeSeriesDataset::setLabels(vector<int> _labels) {
    labels = _labels;
}
void TimeSeriesDataset::setMaxLength(int _maxLength) {
    maxLength = _maxLength;
}
void TimeSeriesDataset::setNumberOfSamples(int _numberOfSamples) {
    numberOfSamples = _numberOfSamples;
}

double euclidean_distance(const vector<double> distance1, const vector<double> distance2 ) {
    double sum = 0.0;
    for (size_t i = 0; i < distance1.size(); ++i) {
        double diff = distance1[i] - distance2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}