#include <iostream>
using namespace std;

class Parent{
    public:
    virtual void print(){
        cout<<"I'm your father." << endl;
    }
    
    void print(int i){
        for (int j = 0; j < i; j++){
            cout<<"I'm your father" << endl;
        }
    }
};

class Child : public Parent {
    public:
    void print(){
        cout << "I'm your son." << endl;
    }
};

int main(){
    Child *child = new Child();
    child -> print();
    
    Parent *father = child;
    father -> print();
    
    delete child;
    
    return 0;
}