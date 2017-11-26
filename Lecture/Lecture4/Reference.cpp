#include <iostream>

int main(){
    int i = 1;
    std::cout << "i = \t" << i <<std::endl;
    int& r = i;
    std::cout << "r = \t" << r << "\n" <<std::endl;
    std::cout << "&i = \t" << &i << std::endl;
    std::cout << "&r = \t" << &r << "\n" << std::endl;
    int x = r;
    std::cout << "x = \t" << x <<"\n" << std::endl;
    r = 2;
    std::cout << "r = \t" << r << std::endl;
    std::cout << "i = \t" << i << std::endl;
}