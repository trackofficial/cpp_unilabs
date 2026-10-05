#include <iostream>
#include <cmath>

int main() {
    double x, y;

    std::cout << "x и y: ";
    std::cin >> x >> y;

    double f1 = pow(x + 1, 2) + pow(y - 5, 2) - 16;
    double f2 = y - pow(3*x + 7, 2);
    double f3 = y - (x - 1);

    bool onCircle   = (f1 > -1e-6 && f1 < 1e-6);
    bool onParabola = (f2 > -1e-6 && f2 < 1e-6);
    bool onLine     = (f3 > -1e-6 && f3 < 1e-6);

    if (onCircle) {
        std::cout << "Точка на ок-ти." << std::endl;
    } 
    else if (onParabola) {
        std::cout << "Точка на параболе." << std::endl;
    } 
    else if (onLine) {
        std::cout << "Точка на прямой." << std::endl;
    } 
    else {
        std::cout << "Точка не лежит ни на одной линии. Она ";
        std::cout << (f1 < 0 ? "внутри круга" : "вне круга") << ", ";
        std::cout << (f2 > 0 ? "выше параболы" : "ниже параболы") << ", ";
        std::cout << (f3 > 0 ? "выше прямой" : "ниже прямой") << std::endl;
    }

    return 0;
}