#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cout<<"Write N";
    cin>>N;
    if (N<=0) {
        cout<<"Write another number";
        return 1;
    }
        //(1,2,3,..)
    long long sum1 =0;
    long long proi1 = 1;
    for (int i = 1; i <= N; ++i) {
        sum1 += i;
        proi1 *= i;
    }
 cout << "Cумма = " << sum1 << ", Произведение = " << proi1 << endl;
        //(2,4,6,..)
    long long sum2 =0;
    long long proi2 = 1;
    for (int i = 1; i <= N; ++i) {
        int ij = i * 2;
        sum2 += ij;
        proi2 *= ij;
    }
 cout << "Cумма = " << sum2 << ", Произведение = " << proi2 << endl;

    //(1,3,5,..)
    long long sum3 =0;
    long long proi3 = 1;
    for (int i = 1; i <= N; ++i) {
        int ij = i * 2 - 1;
        sum3 += ij;
        proi3 *= ij;
    }
 cout << "Cумма = " << sum3 << ", Произведение = " << proi3 << endl;
    
    //1/2,1/3,1/4,...
    double sum4 =0.0;
    double proi4 = 1.0;
    for (int i = 1; i <= N; ++i) {
        double ij = 1.0/i;
        sum4 += ij;
        proi4 *= ij;
    }
 cout << "Cумма = " << sum4 << ", Произведение = " << proi4 << endl;

    //1/2,1/4,1/6,...    
    double sum5 =0.0;
    double proi5 = 1.0;
    for (int i = 1; i <= N; ++i) {
        double ij = 1.0/(i*2);
        sum5 += ij;
        proi5 *= ij;
    }
 cout << "Cумма = " << sum5 << ", Произведение = " << proi5 << endl;

    //1/3,1/5,1/7,...
    double sum6 =0.0;
    double proi6 = 1.0;
    for (int i = 1; i <= N; ++i) {
        double ij = 1.0/(i*2-1);
        sum6 += ij;
        proi6 *= ij;
    }
 cout << "Cумма = " << sum6 << ", Произведение = " << proi6 << endl;

    //1/4,1/8,1/16,...
    double sum7 =0.0;
    double proi7 = 1.0; 
    for (int i = 1; i <= N; ++i) {
        double ij = 1.0/pow(i,2);
        sum7 += ij;
        proi7 *= ij;
    }
 cout << "Cумма = " << sum7 << ", Произведение = " << proi7 << endl;

    //и)
    double sum8 =0.0;
    double proi8 = 1.0; 
    for (int i = 1; i <= N; ++i) {
        double sign = (i % 2 != 0) ? 1.0 : -1.0;
        double t = sign * (1.0 / i);
        sum8 += t;
        proi8 *= t;
    }
 cout << "Cумма = " << sum8 << ", Произведение = " << proi8 << endl;

    //last
    double sum9 =0.0;
    double proi9 = 1.0; 
    double term = 1.0;
    for (int i = 1; i <= N; ++i) {
    sum9 += term;
    proi9 *= term;
    term = term / (i + 1);
    }
 cout << "Cумма = " << sum9 << ", Произведение = " << proi9 << endl;
    
}