#include <iostream>
#include <cmath>

int main() {
    double PI = 3.14;
    int N;//кол-во
    double a;//длина

    std::cout << "Введите длину: ";
    std::cin >> a;
    std::cout << "Введите кол-во: ";
    std::cin >> N;
    std::cout << a/(2*sin(PI/N));//R=a/(2*sin(180/N))
}     