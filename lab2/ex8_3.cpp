#include <iostream>
#include <cmath>

int main() {// здесь короче работает формула ax + by = c
    double a1,a2,b1,b2,c1,c2,d,x,y;

    std::cout << "1 прямая"; 
    std::cin >> a1 >> b1 >> c1;
    std::cout << "2 прямая";
    std::cin >> a2 >> b2 >> c2;
    d = a1*b2 - a2*b1;
    if(d==0){
        std::cout << "||";
    }
    else {
        x = (c1*b2-c2*b1)/d;
        y = (a1*c2-a2*c1)/d;
        std::cout << x << "," << y;
    }
}