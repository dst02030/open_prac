#include <iostream>

int swap (int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int i=3;
    int j=2;
    
    std::cout<<"i= " << i << "\nj= " << j<<std::endl;
    
    swap(i,j);
    
    int &a = i; 
    int &b = j;
    
    std::cout<<"i= " << i << "\nj= " << j<<std::endl;
    printf("i=%d, j= %d",i,j);
}