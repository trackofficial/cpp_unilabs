#include <iostream>

int main() {
    int N;
    std::cout << "Ввод N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "err: размер не подходит" << std::endl;
        return 0;
    }
    double a[N];

    std::cout << "Введите действительные числа: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> a[i];
    }

    int pos = 0;
for (int i = 0; i < N; ++i) {
    if (i % 2 == 0) {
        double temp = a[i];

        for (int j = pos; j < i; ++j) { 
            double next = a[j];
            a[j] = temp;
            temp = next;
        }

            a[i] = temp;
        ++pos;
    }
}

    std::cout << "Преобразованный массив: ";
    for (int i = 0; i < N; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}