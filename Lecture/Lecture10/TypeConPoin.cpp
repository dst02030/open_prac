#include <iostream>
using namespace std;

class Person{
    public:
    void Sleep(){cout<<"Sleep"<<endl;}
};

class Student:public Person{
    public:
    void Study(){
        cout<<"Study"<<endl;
    }
};

class Undergraduate : public Student {
    public:
    void Research() {
        cout<<"Research"<<endl;
    }
};

int main(){
    Person *p1 = new Person;
    Student *p2 = new Undergraduate; // (O)
    Undergraduate *p3 = new Undergraduate; // (O)
    
    p1 -> Sleep();
    p2 -> Sleep();
    p3 -> sleep();
    return 0;
}