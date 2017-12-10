#include <iostream>

using namespace std;

class A{
    public:
    void over() {
        cout << "A 클래스의 over 함수 호출!" << endl;
    }
};

class B : pubic A {
    public:
    void over(){
        A::over();
        cout <<"B 클래스의 over 함수 호출!" << endl;
    }
};

int main(){
    B b;
    b.over();
    return 0;
}