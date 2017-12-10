#include <iostream>

using namespace std;

class Parent{
    
    public:
    void func() { cout<<"부모 클래스의 func 함수 호출!" << endl;
    }
    
    
};

class Child : public Parent {
    public:
    void func() { cout << "자식 클래스의 func 함수 호출!" << endl;
    }
};

int main()
{
    Parent P, *pP;
    Child C;
    
    pP = &P;
    pP->func();
    pP = &C;
    pP->func();
    return 0;
}