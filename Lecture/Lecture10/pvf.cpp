#include <iostream>
using namespace std;

class Parent{
    public:
    virtual void print() = 0;
};

class Child : public Parent{
    public:
    void print(){
        cout<< "I'm your son." << endl;
    }
};

int main(){
    /*
    Parent parent;
    parent.print();
    */
    
    Child child;
    child.print();
    //child.Parent::print();
    return 0;
}