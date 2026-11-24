#include <iostream>
#include <cmath>

int main() {
    double x_1, x_2, dx, a, b, y1, y2, y3;
    const double PI = 3.14159265359;
    std::cout << "Введите x начала: ";
    std::cin >> x_1;
    std::cout << "Введите x конец: ";
    std::cin >> x_2;
    std::cout << "Введите шаг: ";
    std::cin >> dx;
    std::cout << "Введите коэф. a: ";
    std::cin >> a;
    std::cout << "Введите коэф. b: ";
    std::cin >> b;
    std::cout << "    X    |    Y1    |    Y2    |    Y3    " << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    if (dx <= 0) {
        std::cout << "err: dx <= 0 / не выполнимо" << std::endl;
        return 1;
    }
    if (x_1 > x_2) {
        dx = -dx;
    }
    for (double x = x_1; x <= x_2; x += dx) {
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