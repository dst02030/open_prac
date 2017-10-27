#include <iostream>

int main(){
    char i[5]="Blue";
    i[4] = 'j';
    i[5] = 'k';
    int k[6];
    std::cout << sizeof(i) << "\n" << i << "\n" << k;
}