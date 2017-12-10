#include <iostream>

using namespace std;

class Parent{
    private:
    int num1;
    
    public:
    int num2;
    
    protected:
    int num3;
};

class Base : public Parent {
    
};

int main()
{
    Base base;
    
    cout << base.num1 << endl; //error!
    cout << base.num2 << endl; // ok!
    
    cout << base.num3 << endl; // error!
    return 0;
}

/*
private, public, protected의 접근 범위를 한줄로 정리하자면 아래와 같습니다.

private < protected < public
*/