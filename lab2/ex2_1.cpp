#include <iostream>

int main() {
    long long num1;
    long long num2;
    long long num3;
    long long num4;
    long long numval;
    
    std::cout << "Введите: ";
    std::cin >> num1;
        if (num1<=0){
        std::cout << "не N число";
        return 1;
    }
    num2 = num1*num1; // a^2
    num3 = num2*num2; // a^4
    num4 = num3*num3; // a^8
    numval = num4*num2; //a^8*a^a^2    
    std::cout << numval;
    return 0;
}
