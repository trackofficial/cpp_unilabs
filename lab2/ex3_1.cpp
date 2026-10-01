#include <iostream>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int numval;

    std::cout << "Введите: ";
    std::cin >> num1;
    num2 = num1*num1;//^2
    num3 = num2*num2;//^4
    num4 = num3*num3;//^8
    num5 = num4*num4;//^16
    numval = num5/(num2*num1);//a^16/a^3
    std::cout << numval;
    return 0;
}
