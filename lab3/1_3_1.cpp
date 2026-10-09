#include <iostream>
using namespace std;
int main()
{
 double x, y;
 while (true) {
  cout << "Введите координату точки " << endl;
  cin >> x >> y;
  if (cin.fail()) {
   cin.clear();
   cin.ignore(10000, '\n');
   cout << "Вы ввели не число\n" << endl;
  }
  else {
   break;
  }
 }
 int  a=0, b=0, c=0;
 if (((x + 2)*(x+2) + (y - 3) * (y - 3)) < 9) a = 1;
 else if (((x + 2) * (x + 2) + (y - 3) * (y - 3)) > 9) a = 3;
 else a = 2;    
 if (y > ((x + 2) * (x + 2))) b = 1;
 else if (y < ((x + 2) * (x + 2))) b = 3;
 else b = 2;
 if (y > (x - 3)) c = 1;
 else if (y < (x - 3)) c = 3;
 else c = 2;

 if (c == 1) {
  if (a == 1 && b == 1) cout << "1";
  else if (a == 1 && b == 3) cout << '2';
  else if (a == 2) cout << "na okr";
  else if (b == 2) cout << "na porab";
  else if (a == 3 && b == 1) cout << "3";
  else if (a == 3 && b == 3) cout << '4';
 }
 else if (c == 2) cout << "na pram";
 else if (c == 3) cout << '5';
 if (a == 2 && b == 2) cout << "na okr i na porab";
}