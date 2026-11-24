#include <iostream>
#include <cmath>
int main() {
    int N;
    std::cout<<"Write N"<<std::endl;
    std::cin >> N;
    if (N <= 0) {
        std::cout << "ошибка - размер массива не тот" << std::endl;
        return 1;
    }
    double a[N];
    std::cout << "Введите числа действ ";
    for (int i = 0; i < N; ++i) {
        std::cin >> a[i];
    }
    double answer = a[0];
    double max = fabs(a[0]);
    for (int i = 1; i < N; ++i) {
        if (fabs(a[i]) > max) {
            max = fabs(a[i]);
            answer = a[i];
        }
    }
    std::cout << "Значение максимального по модулю элемента: " << answer << std::endl;
    return 0;
}