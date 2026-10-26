#include <iostream>
#include <cmath>

int main(){
    int N;
    std::cout<<"Write N: ";
    std::cin>>N;

    if (N<=0) {
        std::cout<<"Write another number";
        return 1;
    }
        //(1,2,3,..)
    long long sum1 = 0;
    long long proi1 = 1;
    for (int i = 1; i <= N; ++i) {
        sum1 += i;
        proi1 *= i;
    }

 std::cout << "Cумма = " << sum1 << ", Произв = " << proi1 << std::endl;
        //(2,4,6,..)
    long long sum2 = 0;
    long long proi2 = 1;
    for (int i = 1; i <= N; ++i) {
        int ij = i * 2;
        sum2 += ij;
        proi2 *= ij;
    }

 std::cout << "Cумма = " << sum2 << ", Произв = " << proi2 << std::endl;
            //(1,3,5,..)
    long long sum3 = 0;
    long long proi3 = 1;
    for (int i = 1; i <= N; ++i) {
        int ij = i * 2 - 1;
        sum3 += ij;
        proi3 *= ij;
    }

 std::cout << "Cумма = " << sum3 << ", Произв = " << proi3 << std::endl;
        //1/2,1/3,1/4,...
    double sum4 = 0.0;
    double proi4 = 1.0;
    for (int i = 1; i <= N; ++i) {
        double ij = 1.0/i; 
        sum4 += ij;
        proi4 *= ij;
    }
 std::cout << "Cумма = " << sum4 << ", Произв = " << proi4 << std::endl;

    //1/2,1/4,1/6,...    
    double sum5 = 0.0;
    double proi5 = 1.0;
    for (int i = 1; i <= N; ++i) {
        double ij = 1.0/(i*2);
        sum5 += ij;
        proi5 *= ij;
    }
 std::cout << "Cумма = " << sum5 << ", Произв = " << proi5 << std::endl;
    //1/3,1/5,1/7,...
    double sum6 = 0.0;
    double proi6 = 1.0;
    for (int i = 1; i <= N; ++i) {
        double ij = 1.0/(i*2-1);
        sum6 += ij;
        proi6 *= ij;
    }
 std::cout << "Cумма = " << sum6 << ", Произв = " << proi6 << std::endl;

    //1/4,1/8,1/16,...
    double sum7 = 0.0;
    double proi7 = 1.0; 
    for (int i = 1; i <= N; ++i) {
        double ij = 1.0/pow(i,2);
        sum7 += ij;
        proi7 *= ij;
    }
 std::cout << "Cумма = " << sum7 << ", Произв = " << proi7 << std::endl;

    double sum8 = 0.0;
    double proi8 = 1.0; 
    for (int i = 1; i <= N; ++i) {
        double sign = (i % 2 != 0) ? 1.0 : -1.0;
        double t = sign * (1.0 / i);
        sum8 += t;
        proi8 *= t;
    }
 std::cout << "Cумма = " << sum8 << ", Произв = " << proi8 << std::endl;

    double sum9 =0.0;
    double proi9 = 1.0; 
    double term = 1.0;
    for (int i = 1; i <= N; ++i) {
    sum9 += term;
    proi9 *= term;
    term = term / (i + 1);
    }
 std::cout << "Cумма = " << sum9 << ", Произв = " << proi9 << std::endl;
    
}