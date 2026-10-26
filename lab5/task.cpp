#include <iostream>
#include <cmath>
#include <numbers>
int main() {
  double x_start, x_end, dx, a, b;
  double y1, y2, y3;
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
  std::cout << "   X  |   Y1    |   Y2    |   Y3   " << std::endl;
  std::cout << "------------------------------------" << std::endl;
  for (double x=x_start;x <= x_end;x += dx) {

    // y1
    if (x <= 0) {
      y1 = log(std::sin(a*x)+(std::numbers::pi/2));
    }
    else {
      y1 = log(std::numbers::pi+(b*x*x)) - log(2/(1+x));
    }

    // y2
    if (x <= 0) {
      y2 = a*std::cos(x);
    }
    else if (x > 0){
      y2 = a-std::pow(b,x);
    }

    // y3
    if (x <= -1) {
      y3 = std::sqrt(a*(std::abs(x+1)));
    }
    else if (x > -1){
      y3 = (b / std::sqrt(2.0)) - std::sqrt((b * b) / (1.0 + x * x)); 
    }

 
    std::cout << "   " << x << "  |  " << y1 << "  |  " << y2 << "  |  " << y3 << std::endl;
  }

  return 0;
}