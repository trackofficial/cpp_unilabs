#include <iostream>
int main(){
    int num;
    std::cout << "Write ";
    std::cin >> num;
    if (num < 1000 || num > 9999) {
        std::cout << "Ошибка: число должно быть четырехзначным!";
        return 0;
    }
    int d1 = num / 1000;
    int d2 = (num / 100) % 10;// 3 % 2 = 1
    int d3 = (num / 10) % 10; 
    int d4 = num % 10;
    if (d1==d2 && d2==d3 && d3==d4){
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    return 0;
}