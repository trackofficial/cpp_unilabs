#include <iostream>
//пункт 2
int main(){
    int num;
    std::cout << "Write";
    std::cin >> num;

    if (num < 1000 || num > 9999) {
        std::cout << "Ошибка: число должно быть четырехзначным!";
    }
    else {
        std::cout << "число должно быть четырехзначное";
    }
    int d1 = num / 1000;
    int d2 = (num / 100) % 10;
    int d3 = (num / 10) % 10; 
    int d4 = num % 10;
    if (d1==d2==d3==d4){
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
    return 0;
}