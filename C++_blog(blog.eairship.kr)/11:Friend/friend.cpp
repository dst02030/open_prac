#include <iostream>

using namespace std;

class B; // B class의 존재를 알림!

class A{
    private:
    int adata;
    public:
    A(int _data){
        adata = _data;
    }
    void ShowData(B b);
    friend class B;
};

class B{
    private:
    int bdata;
    public:
    B(int _data){
        bdata = _data;
    }
    void ShowData(A a){
        cout << "a.data: " << a.adata << endl;
    }
    friend class A;
};

void A::ShowData(B b)
{
    cout << "b.data: " << b.bdata << endl;
}

int main(){
    A a(10);
    B b(20);
    
    a.ShowData(b);
    b.ShowData(a);
    return 0;
}

/*
friend 선언은 객체 지향의 핵심 중에서 '정보 은닉'을 깨는 행위가 된다.
이는 매우 위험하고, friend를 많이 사용한다면 큰 오류를 일으킬 수 있다.
따라서 연산자 오버로딩에서의 friend 선언이나 그 외의 특별 이유가 아니고서는
friend 사용을 자제해야 한다.
*/