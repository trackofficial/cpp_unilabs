#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2, x3, y3;

    std::cout << "Введите координаты A ";
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты B ";
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты C ";
    std::cin >> x3 >> y3;

    std::cout << "("<< x1 + x3 - x2 << ", " << y1 + y3 - y2 << ")";
    return 0;
}