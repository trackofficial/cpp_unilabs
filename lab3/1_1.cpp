#include <iostream>

int main(){
    int num;
    std::cout << "Write";
    std::cin >> num;
    if (num > num*num) {
        std::cout << "число больше произведения";
    }
    else {
        std::cout << "число меньше произведения";
    }
    return 0;
}