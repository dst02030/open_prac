#include <iostream>
using namespace::std;
#include <string.h>



class student{
    char name[20];
    int age;
    static int count;
    public:
    student(char* _name, int _age){
        strcpy(name, _name);
        age = _age;
        cout<< count++ << "th student"<<endl;
    }
};

int student::count = 1;

int main(){
    student s1("KIM",20);
    student s2("SEO",28);
    
    return 0;
}