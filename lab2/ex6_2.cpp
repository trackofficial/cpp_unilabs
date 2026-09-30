#include <iostream>
#include <cmath>

int main() {
    double a,c;
    
    std::cout << "Введите сторону: ";
    std::cin >> a;
    std::cout << "Введите гипотенузу: ";
    std::cin >> c;
    std::cout << (0.5)*a*sqrt(c*c-a*a);
}     