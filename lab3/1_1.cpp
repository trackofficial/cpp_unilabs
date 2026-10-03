#include <iostream>
//пункт 4
int main(){
    int num;
    std::cout << "Write ";
    std::cin >> num;

    if (num < 1000 || num > 9999) {
        std::cout << "Ошибка: число должно быть четырехзначным!" << '\n';
        return 0;
    }
    else {
        std::cout << "число четырехзначное" << '\n';
    }
    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10; 
    int d4 = num % 10;
    if (d1==d2 && d2==d3 && d3==d4){
        std::cout << "true" << '\n';
    }
    else {
        std::cout << "false" << '\n';
    }
    return 0;
}