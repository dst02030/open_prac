#include <iostream>
#include <string.h>

using namespace std;

class Student{
    private:
    char *name;
    int age;
    
    public:
    Student(char *name, int age) : age(age){
        this -> name = new char[10];
        strcpy(this->name, name);
    }
    
    void ShowInfo(){
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
    
    Student& operator=(Student& ref){
        delete []name;
        name = new char[10];
        strcpy(name, ref.name);
        age = ref.age;
        return *this;
    }
    
    ~Student(){
        delete []name;
        cout << "~Student 소멸자 호출!" << endl;
    }
};

int main()
{
    Student st1("김철수", 14);
    Student st2("홍길동", 15);
    
    st2= st1;
    /*
    복사가 이루어 지면서, st2는 "홍길동" 이 아니라, "김철수"란
    문자열이 담긴 주소를 가리키고, "홍길동" 이라는 문자열은
    접근도, 소멸도 불가능 해지는 상황이 발생함. 또한 두 객체의 소멸자가
    호출 될 때, st1, st2 객체 모두 "김철수"란 문자열이 담긴 주소를 가리키고,
    delete를 통해서 소멸할 때 중복 소멸하는 문제가 발생한다. 따라서
    위의 class 내에 깊은 복사를 정의한다.
    */
    st1.ShowInfo();
    st2.ShowInfo();
    return 0;
}