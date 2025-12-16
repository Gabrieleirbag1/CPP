#include "sinWaveGenerator.h"

SinWaveGenerator::SinWaveGenerator() : TimeSeriesGenerator(), amplitude(1.0), frequency(1.0), phase(0.0) {}

SinWaveGenerator::SinWaveGenerator(int _seed) : TimeSeriesGenerator(_seed), amplitude(1.0), frequency(1.0), phase(0.0) {}

SinWaveGenerator::SinWaveGenerator(double _amplitude, double _frequency, double _phase, int _seed)
    : TimeSeriesGenerator(_seed), amplitude(_amplitude), frequency(_frequency), phase(_phase) {}

double SinWaveGenerator::getAmplitude() const {
    return amplitude;
}

double SinWaveGenerator::getFrequency() const {
    return frequency;
}

double SinWaveGenerator::getPhase() const {
    return phase;
}

void SinWaveGenerator::setPhase(double _phase) {
    phase = _phase;
}

void SinWaveGenerator::setFrequency(double _frequency) {
    frequency = _frequency;
}

void SinWaveGenerator::setAmplitude(double _amplitude) {
    amplitude = _amplitude;
}

vector<double> SinWaveGenerator::generateTimeseries(int length) const {
    vector<double> series;
    series.reserve(length);
    for (int i = 0; i < length; ++i) {
        double value = amplitude * sin(2 * M_PI * frequency * i + phase);
        series.push_back(value);
    }
    return series;
}