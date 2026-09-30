#include <iostream>
#include <cmath>

int main() {
    double x1, x2, y1, y2;

    std::cout << "Введите координаты 1 точки"; // x1 y1 zz1
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты 2 точки ";// x2 y2 z2
    std::cin >> x2 >> y2;
    double xm = (x1+x2)/2;
    double ym = (y1+y2)/2;
    double k = (y2-y1)/(x2-x1);
    double kp = -1/k;
    double y = ym - kp*xm;
    std::cout << "y = " << kp << " * x + " << y;
}