#include <iostream>

namespace A {
    void Add(){
        std::cout<<"A의 Add() 호출!" << std::endl;
    }
    void Minus(){
        printf("A의 Minus() 호출! \n");
    }
}

using namespace A::Add;

int main()
{
    Add();
    A::Minus();
    return 0;
}

