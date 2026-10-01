#include <iostream>

int main() {
    int num1;
    int num2;
    int num3;
    int numval;
    std::cout << "Введите: ";
    std::cin >> num1; //ввод
    num2 = num1*num1; //a^2
    num3 = num2*num2; //a^4
    numval = num3*num3; //a^8
    std::cout << numval;
    return 0;
}
