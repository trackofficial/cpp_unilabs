#include <iostream>
#include <cmath>

int main() {
    double x1, x2, y1, y2, z1, z2;

    std::cout << "Введите координаты 1 точки"; // x1 y1 zz1
    std::cin >> x1 >> y1 >> z1;
    std::cout << "Введите координаты 2 точки ";// x2 y2 z2
    std::cin >> x2 >> y2 >> z2;
    double sqrx = (x2-x1)*(x2-x1);
    double sqry = (y2-y1)*(y2-y1);
    double sqrz = (z2-z1)*(z2-z1);
    std::cout << (sqrt(sqrx+sqry+sqrz))*(sqrt(sqrx+sqry+sqrz))*(sqrt(sqrx+sqry+sqrz));
}