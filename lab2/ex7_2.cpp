#include <iostream>
#include <cmath>

int main() {
    double d1,a;
    
    std::cout << "Введите 1ую диагональ ";
    std::cin >> d1;
    std::cout << "Введите сторону ";
    std::cin >> a;
    std::cout << 0.5 * d1 * sqrt(4.0 * a * a - d1 * d1);
}     