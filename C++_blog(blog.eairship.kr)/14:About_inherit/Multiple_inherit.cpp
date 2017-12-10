#include <iostream>

using namespace std;

class ParentOne {
    public:
    void funcone() {cout << "ParentOne 클래스에서 funcone() 호출!" <<endl;
        
    }
    
};

class ParentTwo{
    public:
    void functwo() {
        cout << "ParentTwo 클래스에서 functwo() 호출!" << endl;
    }
};

class Child : public ParentOne, public ParentTwo{
    public:
    void func() {
        funcone();
        functwo();
    }
};

int main(){
    Child child;
    
    child.func();
    return 0;
}


/*
되도록이면 다중 상속을 사용하지 마라. 다중 상속에는 다양한 문제점들이 존재한다.
특히 상속 받은 두 클래스에 같은 이름의 함수가 존재하면, 어느 함수를 호출할 지를 모르는 모호성이
발생한다. 이 경우, 범위 지정 연산자로 해결할 수 있긴 하다.
*/

/*
또한 다중 상속에서 다이아몬드 상속이 발생할 시에, 맨 초기의 클래스를
두번 상속받는 문제점이 발생한다. 이 경우는 가상 상속을 통해서
해결할 수 있다. 따라서 조금 더 이해를 하고 사용하거나 아예
사용하지 않는 것이 방법이 될 수 있다.
*/