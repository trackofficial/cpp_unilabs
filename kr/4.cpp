#include <iostream>

int main() {
    int n;
    int arr[20];
    std::cin >> n;

    if (n < 1 || n > 20) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int min = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min]) {
            min = i;
        }
    }
    int sum = 0;
    for (int i = min+ 1; i < n; i++) {
        sum += arr[i];
    }
    std::cout << "Сумма " << sum << "\n";

    return 0;
}
