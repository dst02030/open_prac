#include <iostream>

int main(){
    int i, *iptr=NULL;
    
    std::cout<<"address of i = \t" << &i<<std::endl;
    std::cout<<"address of *iptr = \t" << iptr<<std::endl ;
    std::cout<<"*iptr = \t" << *iptr ;
}