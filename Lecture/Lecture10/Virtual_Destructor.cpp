#include <iostream>
using namespace std;
#include <string.h>

class Parent{
    char* familyName;
    public:
    Parent(char* _familyName){
        familyName = new char[strlen(_familyName)+1];
        strcpy(familyName, _familyName);
    }
    virtual ~Parent(){
        cout<<"~Parent()"<<endl;
        delete familyName;
    }
    
    virtual void PrintName(){
        cout<<familyName<<',';
    }
};

class Child : public Parent{
    char* name;
    public:
    Child(char* _familyName, char* _name)
    :Parent(_familyName){
        name = new char[strlen(_name)+1];
        strcpy(name, _name);
    }
    virtual ~Child()
    {
        cout<<"~Child()" << endl;
        delete name;
    }
    virtual void PrintName()
    {
        Parent::PrintName();
        cout<<name<<endl;
    }
};


int main(){
    Parent *parent = new Child("KIM", "JH");
    Child *child = new Child("KIM", "HS");
    parent -> PrintName();
    child -> PrintName();
    cout<<endl;
    delete child;
    cout << endl;
    delete parent;
    
    return 0;
    
}