#include <iostream>
using namespace std;

class Parent{
    public:
    void print(){
        cout<<"I'm your father." << endl;
    }
};

class Child : public Parent {
    public:
    void print(int i = 1){
        cout << "I'm your son." << endl;
    }
};

int main(){
    Child child;
    child.print();
    child.print(3);
    return 0;
}