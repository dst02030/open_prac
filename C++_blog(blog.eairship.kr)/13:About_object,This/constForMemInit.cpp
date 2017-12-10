#include <iostream>
#include <string.h>

using namespace std;

class Student{
    private:
    char name[10];
    int age;
    int studentID;
    
    public:
    Student(char *_name, int _age, int _studentID) : age(_age), studentID(_studentID){
        strcpy(name, _name);
    }
    void GetInfo(){
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
        cout << "학번: " << studentID << endl;
    }
};

int main(){
    Student student[3] = {Student("김철수",14,1), Student("김영희",14,2), Student("김봉봉",84,129)};
    
    for (int i=0; i<3; i++)
    student[i].GetInfo();
}