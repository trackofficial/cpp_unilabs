#include <iostream>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    int numval;
    
    std::cout << "Введите: ";
    std::cin >> num1;
    num2 = num1*num1; // a^2
    num3 = num2*num2; // a^4
    num4 = num3*num3; // a^8
    numval = num4*num2; //a^8*a^a^2    
    std::cout << numval;
}
