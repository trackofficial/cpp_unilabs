#include <iostream>
#include <cmath>

int main() {
    double x, y, z;
    std::cout << "Введите x и y: ";
    std::cin >> x >> y;
    double chisl1 = (x < 5) ? x : 5;
    double chisl2 = (y > 10) ? y : 10;
    double znam1 = (x < 10) ? x : 10;
    double koren = std::pow(x, 1.0 / 7.0);
    double znam2 = (y > koren) ? y : koren;
    double chislfull;
    if (chisl1 > chisl2) {
        chislfull = chisl1;
    } else {
        chislfull = chisl2;
    }
    double znamfull;
    if (znam1 > znam2) {
        znamfull = znam1;
    } else {
        znamfull = znam2;
    }
    if (znamfull == 0) {
        std::cout << "на ноль деление запрещено" << std::endl;
    } else {
        z = chislfull / znamfull;
        std::cout << "z = " << z << std::endl;
    }
    return 0;
}
