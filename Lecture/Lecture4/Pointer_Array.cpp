#include <iostream>

int main(){
    int v[5];
    int *vv = &v[0];
    
    std::cout<<"v = \t" << v << "\n" << "vv = \t" << vv << "\n" << "*vv = \t" << *vv<<std::endl;
    int* vx = vv+1;
    std::cout << "vv+1 = \t" << vx << std::endl;
    int** vk = &vv+1;
    std::cout<<"&vv = \t" << &vv<<std::endl;
    std::cout << "&vv+1 = \t" << vk <<std::endl;
    std::cout << "vx - vv = \t " << vx-vv;
}