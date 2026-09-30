#include <iostream>
#include <cmath>

int main() {
    double d1,d2,s,d2sq, d1sq, ssq, sqdel;
    
    std::cout << "Введите диагональ 1 ";
    std::cin >> d1;
    std::cout << "Введите диагональ 2 ";
    std::cin >> d2;
    std::cout << "Введите площадь ";
    std::cin >> s;
    d2sq = d2*d2;
    d1sq = d1*d1;
    ssq = s*s;
    sqdel = (d1sq-d2sq)*(d1sq-d2sq);
    std::cout << sqrt(2*(d1sq+d2sq+sqrt(16*ssq + sqdel)));
}     