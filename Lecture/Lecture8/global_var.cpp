#include <iostream>
using namespace::std;
#include <string.h>

int count= 1;

class student{
    char name[20];
    int age;
    public:
    student(char* _name, int _age){
        strcpy(name, _name);
        age = _age;
        cout<< count++ << "th student"<<endl;
    }
};

int main(){
    student s1("KIM",20);
    student s2("SEO",28);
    
    return 0;
}