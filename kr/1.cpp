#include <iostream>

int main(){
    int x;
    std::cin>>x;
    if (x < -99 && x > -1000) {
        std::cout<<"true";
        return 0;
    }
    else {
        std::cout<<"false";
        return 1;
    }
}
