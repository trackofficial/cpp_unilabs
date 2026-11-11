#include <iostream>

int main(){
    double arr[5][5];
    double x;
    double y;
    for (int i = 0; i <5;i++) {
        for (int j=0;j<5;j++) {
            std::cin>>arr[i][j];
        }
    }
    x = arr[0][0];
        for (int i = 0; i <5;i++) {
        for (int j=0;j<5;j++) {
            if (x < arr[i][j]) {
                 x = arr[i][j];    
            }
        }
    }
    for (int i = 0; i <5;i++) {
        for (int j=0;j<5;j++) {
            arr[i][j]/=x;
        }
    }
    for (int i = 0; i <5;i++) {
        std::cout << "\n";
        for (int j=0;j<5;j++) {
            std::cout<<arr[i][j]<<"  ";
        }
    }
            std::cout << "max = " <<x <<"\n";
}