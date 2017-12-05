#include <iostream>
using namespace std;

class Parent{
    char* familyName;
    public:
    Parent(char* _familyName){
        familyName = new char[strlen(_familyName)+1];
        strcpy(familyName, _familyName);
    }
    ~Parent(){
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
};