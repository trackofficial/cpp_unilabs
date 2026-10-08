#include <iostream>

int main() {
    long long num1;
    long long num2;
    long long num3;
    long long numval;
    std::cout << "Введите: ";
    std::cin >> num1; //ввод
    if (num1<=0){
        std::cout << "не N число";
        return 1;
    }
    
    num2 = num1*num1; //a^2
    num3 = num2*num2; //a^4
    numval = num3*num3; //a^8
    std::cout << numval;
    return 0;
}
