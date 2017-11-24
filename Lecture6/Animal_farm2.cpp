#include <iostream>

struct animal{
    void (*Cry)();

}animal_farm[3];

void Dog_cry(){
    std::cout<<"Mung-Mung! \n";
};

void Cat_cry(){
    std::cout<<"Ya-ong! \n"
};

animal_farm[0].Cry = Dog_cry;
animal_farm[1].Cry = Cat_cry;
int main(){
    
}