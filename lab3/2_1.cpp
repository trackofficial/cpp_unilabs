#include <iostream>
#include <cmath>
double max(double x, double y) {
    return (x > y) ? x : y;
}
double min(double x, double y) {
    return (x < y) ? x : y;
}
int main() {
    double x,y,z;
    std::cout << "Введите x и y: ";
    std::cin >> x >> y;
    double chisl1 = min(x,5);
    double chisl2 = max(y,10);
    double znam1 = min(x,10);
    double znam2 = max(y,pow(x, 1.0 / 7.0));
    double chislfull = max(chisl1,chisl2);
    double znamfull = max(znam1,znam2);
    z = chislfull/znamfull;
    if (znamfull == 0){
    std::cout << "на ноль деление запрещено";
    }
    else{
    std::cout << "z = " << z;
    }
    return 0;
}