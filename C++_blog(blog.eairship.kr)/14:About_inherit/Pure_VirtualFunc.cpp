#include <iostream>

using namespace std;

class Parent{
    public:
    virtual void func() = 0;
    
   // virtual void ff() = 0;
    
};

class Child : public Parent {

    public:
    virtual void func(){
        cout << "자식 클래스의 func 함수 호출!" << endl;
    }
    
};

int main(){
    Parent A;
    Parent *P;
    
    P = new Child;
    P->func();
    return 0;
}

/*
부모 클래스 내의 순수 가상함수는 자식 클래스 내에서 반드시 재정의 되어야 함.
즉, 순수 가상 함수는 반드시 자식 클래스에서 오버라이딩이 되어야 함.

또한 추상 클래스는 객체를 만들 수 없다. 왜냐하면 몸체도 정의 되어있지 않은
추상 클래스의 객체를 만든 다는 것은 아무런 의미가 없기 떄문이다.

하지만 추상 클래스의 포인터는 선언 할 수 있다.


추상 클래스는 순수 가상 함수 선언을 하나라도 포함한다면, 그 클래스는 추상 클래스가 된다.
또한 추상 클래스를 상속하고, 상속받은 클래스에서 순수 가상 함수를 정의하지 않는다면,
그 클래스 또한 추상 클래스가 된다.
*/