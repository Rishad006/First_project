#include <iostream>
#include <cmath>

#define PI 3.14159265

int main() {
    const int samples = 100;  // Number of samples
    double amplitude = 1.0;   // Amplitude of the sine wave
    double sineWave[samples]; // Array to store the sine wave
    double clippedWave[samples]; // Array to store the clipped wave

    // Generate the sine wave
    for(int i = 0; i < samples; ++i) {
        double t = (2.0 * PI * i) / samples; // Time step
        sineWave[i] = amplitude * sin(t);
    }

    // Apply positive series clipping
    for(int i = 0; i < samples; ++i) {
        if(sineWave[i] > 0) {
            clippedWave[i] = 0; // Clip positive values to 0
        } else {
            clippedWave[i] = sineWave[i]; // Retain negative values
        }
    }

    // Print the original and clipped waveforms
    std::cout << "Original Sine Wave:\n";
    for(int i = 0; i < samples; ++i) {
        std::cout << sineWave[i] << " ";
    }
    std::cout << "\n\nClipped Sine Wave:\n";
    for(int i = 0; i < samples; ++i) {
        std::cout << clippedWave[i] << " ";
    }

    return 0;
}

