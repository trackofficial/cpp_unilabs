#include <iostream>
#include <cmath>

int main(){
    double a,b,c,p;
    std::cout << "Введите длину 1ой стороны: ";
    std::cin >> a;
    std::cout << "Введите длину 2ой стороны: ";
    std::cin >> b;
    std::cout << "Введите длину 3ой стороны: ";
    std::cin >> c;
    p = (a+b+c)/2;
    std::cout << sqrt(p*(p-a)*(p-b)*(p-c));
}