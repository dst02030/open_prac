#include <iostream>

namespace Space1{
    int data;
    double func1(int arg){
        int k = 3;
        std::cout<<k<<std::endl;
        k+=1;
        std::cout<<k<<std::endl;
    }
    double func2(bool arg){
        double k = 2.25;
        std::cout<<k<<std::endl;
        k -=0.25;
        std::cout<<k<<std::endl;
    }
}

namespace Space2{
    int data;
    double func1(int arg);
    void func2(bool arg);
}
double Space2 :: func1(int arg)
{int k = 4;
std::cout<<k<<std::endl;
k+=1;
    std::cout<<k<<std::endl;
}

void Space2 :: func2(bool arg){
    double k = 3.25;
    std::cout<<k<<std::endl;
    k-=1.25;
    std::cout<<k<<std::endl;
}

int main(){
    using namespace Space1;
    using namespace Space2;
    int a = 3;
    Space1 :: func1(a);
    Space2 :: func2(a);
    return 0;
}