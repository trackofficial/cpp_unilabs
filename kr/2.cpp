#include <iostream>

int main(){
    double i;
    double y;
    for(i = -5; i<6;i+=0.5){
        y=(i*i)-3*i+4;
        std::cout<<"x = " << i << "y = "<< y<<"\n"; 
    }
}
