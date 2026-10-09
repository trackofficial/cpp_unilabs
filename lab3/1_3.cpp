#include <iostream>
#include <cmath>

int main() {
    double x, y;
    std::cout << "x и y: ";
    std::cin >> x >> y;
    double f1 = pow(x + 1, 2) + pow(y - 5, 2) - 16;
    double f2 = y - pow(3*x + 7, 2);
    double f3 = y - (x - 1);

 if (f1 == 0) {
        std::cout << "Точка на ок-ти. ";
    } 
    else if(f1 < 0){
        std::cout << "Внутри ок-ти ";
    }
    else if(f1 > 0){
        std::cout << "за ок-тью ";
    }
    else if (f2 == 0) {
        std::cout << "Точка на параболе. ";
    } 
        else if(f2 > 0){
        std::cout << "Внутри параболы ";
    }
    else if(f2 < 0){
        std::cout << "за параболой ";
    }
    else if (f3 == 0) {
        std::cout << "Точка на прямой. ";
    } 
        else if(f3 < 0){
        std::cout << "под прямой ";
    }
    else if(f3 > 0){
        std::cout << "над прямой ";
    }
    
    return 0;
}