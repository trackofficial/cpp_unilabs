#include <iostream>
#include <cmath>

int main(){
    double x;
    int n;
    std::cout << "Введите [-1;1] и их кол-во ";
    std::cin >> x >> n;
    
    if (abs(x) >1){
        std::cout << "не то число";
        return 1;
    }
    double sumf = 0.0;
    double tf = x;
    for (int i = 0; i < n; i++) {
        sumf += tf;
        tf *= -x * x * (2 * i + 1) / (2 * i + 3);
    }

    double sumw = 0.0;
    double tw = x;
    int i = 0;
    while (i < n) {
        sumw += tw;
        tw *= -x * x * (2 * i + 1) / (2 * i + 3);
        i++;
    }

    double sumdo = 0.0;
    double tdo = x;
    int ido = 0;
    if (n > 0) {
        do {
            sumdo += tdo;
            tdo *= -x * x * (2 * ido + 1) / (2 * ido + 3);
            ido++;
        } while (ido < n);
    }
    std::cout << "для " << n << ": for: " << sumf << " , while: " << sumw << " , do while: " << sumdo;
    return 0;
}