#include <iostream>
#include <cmath>
int main() {
    double x1, x2, y1, y2, z1, z2, sqrx, sqry, sqrz, sumsqr;
    std::cout << "Введите координаты 1 точки"; // x1 y1
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты 2 точки ";// x2 y2
    std::cin >> x2 >> y2;
    sqrx = (x2 - x1) * (x2 - x1);
    sqry = (y2 - y1) * (y2 - y1);
    sqrz = (z2 - z1) * (z2 - z1);
    sumsqr = sqrx + sqry + sqrz;
    std::cout << 6*sumsqr;
}