#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cout << "Ввод N: ";
    std::cin >> N;
    if (N <= 0) {
        std::cout << "err: размер не подходит" << std::endl;
        return 1;
    }
    double a[N];
    std::cout << "Введите действительные числа";
    for (int i = 0; i < N; ++i) {
        std::cin >> a[i];
    }
    if (N < 2) {
        std::cout << "err: размер не подходит" << std::endl;
        return 0;
    }
    int max = 0;
    int min = 0;
    for (int i = 1; i < N; ++i) {
        if (fabs(a[i]) > fabs(a[max])) {
            max = i;
        }
        if (fabs(a[i]) < fabs(a[min])) {
            min = i;
        }
    }
    int left = max;
    int right = min;
    if (left > right) {
        int buf = left;
        left = right;
        right = buf;
    }
    if (right - left <= 1) {
        std::cout << "нет элементов" << std::endl;
    } else {
        double answ = 1.0;
        for (int i = left + 1; i < right; ++i) {
            answ *= a[i];
        }
        std::cout << "[" << a[left] << ";" << a[right] << "]: " << answ << std::endl;
    }
    return 0;
}