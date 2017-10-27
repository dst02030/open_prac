#include <iostream>

int main(){
    char* a;
    int* b;
    double* c;
    int*** d;

    void* g;
    std::cout << "size of char* = " << sizeof(a) << "\n" << "size of int* = " << sizeof(b) << std::endl;
    std::cout << "size of double* = " << sizeof(c) << "\n" << "size of int*** = " << sizeof(d) << std::endl;
    std::cout << "size of void* = " << sizeof(g) << std::endl;
    std::cout << "size of void = " << sizeof(void);
    return 0;
}