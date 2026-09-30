#include <iostream>
#include <cmath>
int main() {
    double x1, x2, y1, y2, sqrx, sqry;
    int logic;
    std::cout << "Введите координаты 1 точки"; // x1 y1
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты 2 точки ";// x2 y2
    std::cin >> x2 >> y2;
    std::cout << "0- соседние, 1- противопположн.";
    std::cin >> logic;
    sqrx = (x2-x1)*(x2-x1);
    sqry = (y2-y1)*(y2-y1);
    if (logic==0){
    std::cout << (sqrx+sqry);
    }
    else if (logic==1) {
    std::cout << (sqrx+sqry)/2;
    }
    else {
    std::cout << "не то число";
    }
}