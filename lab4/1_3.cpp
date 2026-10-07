#include <iostream>

int main() {
    long long n;
    std::cout << "Введите натуральное";
    if (!(std::cin >> n) || n <= 0) {
        std::cout << "не натуральное число\n";
        return 1;
    }
    std::cout << "Простые множители " << n << ": ";
    while (n % 2 == 0) {
        std::cout << 2 << " ";
        n /= 2;
    }
    for (long long d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            std::cout << d << " ";
            n /= d;
        }
    }
    if (n > 1) {
        std::cout << n;
    }
    std::cout << "\n";
    return 0;
}
