#include <iostream>
#include <cmath>

int main(){
    double PI = 3.14;
    double L1,L2;
    std::cout << "Введите длину внешней: ";
    std::cin >> L1;
    std::cout << "Введите длину внутр.: ";
    std::cin >> L2;
    std::cout << (L1*L1 - L2*L2)/(4*PI);
}
