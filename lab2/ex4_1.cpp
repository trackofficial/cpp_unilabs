#include <iostream>

int main() {
    long long num1;
    long long num2;
    long long num3;
    long long num4;
    long long num5;
    long long numval;
    
    std::cout << "Введите: ";
    std::cin >> num1;
        if (num1<=0){
        std::cout << "не N число";
        return 1;
    }
    num2 = num1*num1;//^2
    num3 = num2*num2;//^4
    num4 = num3*num3;//^8
    num5 = num4*num4;//^16
    numval = num5/num1;//a^16/a^1
    std::cout << numval;
    return 0;
}
