#include <iostream>

int main(){
    int num1[5] = {1,2,3,4,5};
    int num2[] = {1,2,3,4,5};
    std::cout<<"length of num1 =" << sizeof(num1)/sizeof(int)<<std::endl;
    std::cout<<"length of num2 =" << sizeof(num2)/sizeof(int)<<std::endl;
    return 0;
}