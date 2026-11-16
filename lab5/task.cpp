#include <iostream>
#include <cmath>

int main() {
    double x_start, x_end, dx, a, b;
    double y1, y2, y3;
    const double PI = 3.14159265359;
    std::cout << "Введите x начала: ";
    std::cin >> x_start;
    std::cout << "Введите x конец: ";
    std::cin >> x_end;
    std::cout << "Введите dx: ";
    std::cin >> dx;
    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "     X    |    Y1    |    Y2    |    Y3    " << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (double x = x_start; x <= x_end + dx / 2.0; x += dx) {
        if (x <= 0) {
            y1 = std::log(std::sin(a * x) + PI / 2.0);
        } else {
            y1 = std::log(PI + b * x * x) - std::log(2.0 / (1.0 + x));
        }
        if (x <= 0) {
            y2 = a * std::cos(x);
        } else {
            y2 = a - std::pow(b, x);
        }
        if (x <= -1) {
            y3 = std::sqrt(a * std::abs(x + 1.0));
        } else {
            y3 = b / std::sqrt(2.0) - std::sqrt((b * b) / (1.0 + x * x));
        }

        std::cout << "   " << x << "  |  " << y1 << "  |  " << y2 << "  |  " << y3 << std::endl;
    }

    return 0;
}