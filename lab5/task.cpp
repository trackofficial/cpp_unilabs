#include <iostream>
#include <cmath>
#include <numbers>
int main() {
  double x_start, x_end, dx, a, b;//сделать со своей функцией

  std::cout << "Введите x_start:";
  std::cin >> x_start;
  std::cout << "Введите x_end:";
  std::cin >> x_end;
  std::cout << "Введите dx:";
  std::cin >> dx;
  std::cout << "Введите а:";
  std::cin >> a;
  std::cout << "Введите b:";
  std::cin >> b;

  for (double x=x_start;x <= x_end;x += dx) {
    double y1, y2, y3;

    // y1
    if (x <= 0) {
      y1 = sqrt(a * a - pow(x + a, 2));
    }
    else {
      y1 = -b * sin(x);
    }

    // y2
    if (x <= -1) {
      y2 = log10(b / (x * x));
    }
    else {
      y2 = log10(b + sqrt(x + 1));
    }

    // y3
    if (x <= 0) {
      y3 = abs(x * x + std::numbers::pi * x + 1);
    }
    else {
      y3 = 1 + b * log(1 + x);
    }

    std::cout << "x = " << x << std::endl;
    std::cout << "y1 = " << y1 << std::endl;
    std::cout << "y2 = " << y2 << std::endl;
    std::cout << "y3 = " << y3 << std::endl;
    std::cout << "_______" << std::endl;
  }

  return 0;
}