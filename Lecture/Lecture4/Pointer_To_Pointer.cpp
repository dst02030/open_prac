#include <iostream>

int main(){
    char **pp, *p, ch;
    ch = '3';
    p = &ch;
    std::cout<< "&ch = \t" << &ch << std::endl;
    std::cout<< "ch = \t" << ch << std::endl;
    std::cout<<"p = \t" << p << std::endl;
    pp = &p;
    std::cout<<"pp = \t" << pp << std::endl;
    **pp = 'A';
    std::cout<<"ch = \t" << ch << std::endl;
    *p = 'B';
    std::cout<<"ch = \t" << ch << std::endl;
    
    int k =5; 
    int *kk = &k;
    std::cout << "&k = \t" << &k << "\n" << "k = \t" << k <<"\n" << "*kk = \t" << kk << std::endl; 
    std::cout << "&kk = \t" <<&kk; 
    
}