#include <iostream>
#include <cmath>

int main() {
    double d1,s;
    
    std::cout << "Введите диагональ 1 ";
    std::cin >> d1;
    std::cout << "Введите площадь ";
    std::cin >> s;
    std::cout << 2*sqrt((d1*d1)+((4*s*s)/(d1*d1)));
}     