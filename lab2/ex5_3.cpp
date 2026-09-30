#include <iostream>
#include <cmath>

int main() {
    double x1, x2, y1, y2, z1, z2, angle;

    std::cout << "Введите координаты 1 точки"; // x1 y1 zz1
    std::cin >> x1 >> y1 >> z1;
    std::cout << "Введите координаты 2 точки ";// x2 y2 z2
    std::cin >> x2 >> y2 >> z2;
    angle = (x1*x2+y1*y2+z1*z2)/(sqrt(x1*x1+y1*y1+z1*z1)*sqrt(x2*x2+y2*y2+z2*z2));
    std::cout << acos(angle);
}