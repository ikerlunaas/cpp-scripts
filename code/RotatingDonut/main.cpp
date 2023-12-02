#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <thread>

const int kWidth = 80;
const int kHeight = 24;

void clearScreen() {
#ifdef _WIN32
    std::system("cls");
#else
    // Assume UNIX-like system
    std::system("clear");
#endif
}

void drawDonut(double A, double B) {
    // Character set for drawing the donut
    const char charset[] = ".:-=+*%@#";

    // Initialize arrays
    double z[kWidth * kHeight] = {0};
    char output[kWidth * kHeight] = {' '};

    // Main donut-drawing logic
    for (double j = 0; j < 6.28; j += 0.07) {
        for (double i = 0; i < 6.28; i += 0.02) {
            double c = sin(i);
            double d = cos(j);
            double e = sin(A);
            double f = sin(j);
            double g = cos(A);
            double h = d + 2;
            double D = 1 / (c * h * e + f * g + 5);
            double l = cos(i);
            double m = cos(B);
            double n = sin(B);
            double t = c * h * g - f * e;
            int x = int(40 + 30 * D * (l * h * m - t * n));
            int y = int(12 + 15 * D * (l * h * n + t * m));
            int o = x + kWidth * y;
            int N = int(8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n));

            if (o >= 0 && o < kWidth * kHeight && D > z[o]) {
                z[o] = D;
                output[o] = charset[N > 0 ? N : 0];
            }
        }
    }

    // Display the donut
    for (int i = 0; i < kWidth * kHeight; ++i) {
        std::cout << output[i];
        if ((i + 1) % kWidth == 0) {
            std::cout << '\n';
        }
    }
}

int main() {
    double A = 0.0;
    double B = 0.0;

    while (true) {
        clearScreen();
        drawDonut(A, B);
        A += 0.05;
        B += 0.02;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    return 0;
}
