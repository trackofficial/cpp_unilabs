#include <iostream>

int main() {
    long long num1;
    long long num2;
    long long num3;
    long long num4;
    long long num5;
    long long num6;
    long long numval;

    std::cout << "Введите: ";
    std::cin >> num1;
    num2 = num1*num1;//^2
    num3 = num2*num1;//^3
    num4 = num3*num3;//^6
    num5 = num4*num4;//^12
    num6 = num5*num5;//^24
    numval = num6/num3;//^a^24/a^3
    std::cout << numval;
    return 0;
}
