#include <iostream>
#include <string.h>
using namespace std;

class Human {
    private:
    int age;
    char name[10];
    char hobby[20];
    
    public:
    Human(int _age, char *_name, char *_hobby) : age(_age){
        strcpy(name, _name);
        strcpy(hobby, _hobby);
    }
    
    void getup(){
        cout << "기상! " << endl;
    }
    
    void sleep(){
        cout << "취침!" << endl;
    }
    
    void eat(){
        cout << "식사!" <<endl;
    }
    
    void study(){
        cout<< "공부!" << endl;
    }
    
    void ShowInfo(){
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
        cout << "취미: " << hobby << endl;
    }
};

class Student : public Human {
    private:
    char school[30];
    
    public:
    Student(int _age, char *_name, char *_hobby, char *_school) : Human(_age, _name, _hobby)
    {
        strcpy(school, _school);
    } 
    
    void schoolInfo(){
        ShowInfo();
        cout << "소속 학교: " << school << endl;
    }
    
};

int main(){
    Student stu (23, "조현재", "주식", "한동대학교");
    
    stu.schoolInfo();
    stu.getup();
    stu.eat();
    stu.study();
    stu.sleep();
    
    return 0;
}