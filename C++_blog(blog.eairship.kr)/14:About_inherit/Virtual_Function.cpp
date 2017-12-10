#include <iostream>

using namespace std;

class Parent{
    
    public:
    virtual void func() { cout<<"부모 클래스의 func 함수 호출!" << endl;
    }
    
    
};

class Child : public Parent {
    public:
    virtual void func() { cout << "자식 클래스의 func 함수 호출!" << endl;
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

/*
C++ 컴파일러가 실제로 가리키는 객체의 자료형이 아니라, 포인터
변수의 자료형을 기준으로 판단한다. 따라서 실제로 가리키는
객체의 자료형에 따라 멤버 함수가 호출되게 하려면,
virtual 함수를 사용해야함!
*/