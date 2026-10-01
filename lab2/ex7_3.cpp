#include <iostream>
#include <cmath>

int main() {
    double x1, x2, y1, y2;
    int logic;

    std::cout << "Введите координаты 1 точки"; // x1 y1 
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты 2 точки ";// x2 y2 
    std::cin >> x2 >> y2;
    std::cout << "0 - смежные. 1 - противоположные";// мы не знаем какие они у нас
    std::cin >> logic;
    if (logic == 0) {
        double dx = x2 - x1;
        double dy = y2 - y1;
        // против часовой т.к мы не знаем как идет A и B, C, D
        double x3_1 = x2 - dy;
        double y3_1 = y2 + dx;
        double x4_1 = x1 - dy;
        double y4_1 = y1 + dx;
        // по часовой
        double x3_2 = x2 + dy;
        double y3_2 = y2 - dx;
        double x4_2 = x1 + dy;
        double y4_2 = y1 - dx;
        std::cout << "2 Варианта";
        std::cout << "1) 3точка" << x3_1 <<  "," << y3_1 << "4point" << x4_1 << "," << y4_1; 
        std::cout << "2) 3точка" << x3_2 <<  "," << y3_2 << "4point" << x4_2 << "," << y4_2; 
    }
    else if (logic == 1) {
        double mx = (x1 + x2) / 2.0;
        double my = (y1 + y2) / 2.0;

        double px = x1 - mx;
        double py = y1 - my;

        double x3 = mx - py;
        double y3 = my + px;
        double x4 = mx + py;
        double y4 = my - px;

        std::cout << "3 point - " << x3 << "," << y3 << "& 4 point -" << x4 << "," << y4;
    }
    else {
        std::cout << "выбрали не то число";
    }
    return 0;
}