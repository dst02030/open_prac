#include <iostream>
using namespace std;

class Parent{
    public:
    virtual void vpr(){
        cout<<"vpr: parent" << endl;
    }
    void nvpr(){
        cout<<"nvpr: parent"<<endl;
    }
};

class Child : public Parent{
    public:
    void vpr(){
        cout<<"vpr: child" << endl;
    }
    void nvpr(){
        cout<<"nvpr: child"<<endl;
    }
};

int main(){
    Parent father;
    Child son;
    Parent *par_pt = &son;
    
    father.vpr();
    father.nvpr();
    son.vpr();
    son.nvpr();
    
    par_pt->vpr();
    par_pt -> nvpr();
}