#include <iostream>
#include <cmath>

int main() {
    double x1, x2, y1, y2, x3, y3, ab, bc, ac;

    std::cout << "Введите координаты 1 точки "; // x1 y1 A
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты 2 точки ";// x2 y2 B
    std::cin >> x2 >> y2;
    std::cout << "Введите координаты 3 точки ";// x3 y3 C
    std::cin >> x3 >> y3;
    ab = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    bc = sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
    ac = sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
    std::cout << ab + bc+ ac;
    return 0;
}