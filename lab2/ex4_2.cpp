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
    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "какое-то число <= 0";
        return 1;
    }else{
    p = (a+b+c)/2;
    std::cout << sqrt(p*(p-a)*(p-b)*(p-c));
    return 0;
}
}