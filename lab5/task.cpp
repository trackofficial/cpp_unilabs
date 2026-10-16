#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    double PI = 3.14159265358979323846;
    double x_start, x_end, dx;
    double a, b;
    std::cout << "Xнач:";
    std::cin >> x_start;
    std::cout << "Xкон:";
    std::cin >> x_end;
    std::cout << "dX:";
    std::cin >> dx;
    std::cout << "коэф a:";
    std::cin >> a;
    std::cout << "коэф b:";
    std::cin >> b;

    std::cout << "\n";
    std::cout << "   X   |   Y1    |   Y2    |   Y3    \n";
    std::cout << std::fixed << std::setprecision(4);
    int steps = static_cast<int>((x_end - x_start) / dx) + 1;
    for (int i = 0; i < steps; ++i) {
        double x = x_start + i * dx;
        double y1 = 0, y2 = 0, y3 = 0;
        bool y1_valid = true, y3_valid = true;
        if (x <= 0) {
            double sin_val = std::sin(a * x) + PI / 2.0;
            if (sin_val > 0) {
                y1 = std::log(sin_val);
            } else {
                y1_valid = false; 
            }
        } else {
            double log_arg1 = PI + b * x * x;
            double log_arg2 = 2.0 / (1.0 + x);
            if (log_arg1 > 0 && log_arg2 > 0) {
                y1 = std::log(log_arg1) - std::log(log_arg2);
            } else {
                y1_valid = false;
            }
        }

        if (x <= 0) {
            y2 = a * std::cos(x);
        } else {
            y2 = a - std::pow(b, x);
        }

        if (x <= -1) {
            double sqrt_arg = a * std::abs(x + 1.0);
            if (sqrt_arg >= 0) {
                y3 = std::sqrt(sqrt_arg);
            } else {
                y3_valid = false; 
            }
        } else {
            double sqrt_arg = (b * b) / (1.0 + x * x);
            if (sqrt_arg >= 0) {
                y3 = (b / std::sqrt(2.0)) - std::sqrt(sqrt_arg);
            } else {
                y3_valid = false;
            }
        }

        std::cout << " " << std::setw(5) << x << " | ";

        if (y1_valid) std::cout << std::setw(7) << y1;
        else std::cout << " ERROR ";
        std::cout << " | ";
        std::cout << std::setw(7) << y2 << " | ";
        if (y3_valid) std::cout << std::setw(7) << y3;
        else std::cout << " ERROR ";
        
        std::cout << "\n";
    }

    return 0;
}
