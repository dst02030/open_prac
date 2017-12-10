#include <iostream>

using namespace std;

class NUMBOX{
    private:
    int num1, num2;
    
    public:
    NUMBOX(int num1, int num2) : num1(num1), num2(num2){
        
    }
    
    void ShowNumber(){
        cout << "num1: " << num1 << ", num2: " << num2 << endl;
    }
    NUMBOX operator+(NUMBOX &ref)
    {
        return NUMBOX(num1+ref.num1, num2+ref.num2);
    }
};

int main(){
    NUMBOX nb1 (10, 20);
    NUMBOX nb2 (5,2);
   // NUMBOX result = nb1 + nb2;
    NUMBOX result = nb1.operator+(nb2); //위와 같은 결과
    // nb1 + nb2 = nb1.operator+(nb2); <== 같은걸 의미
    
    nb1.ShowNumber();
    nb2.ShowNumber();
    result.ShowNumber();
}


/*

위처럼, nb1 + nb2은 nb1.operator+(nb2)로 해석되어 컴파일 됩니다. 
물론, operator+가 아니여도 operator<연산자>(operator+, operator-, operator*..)와 같은 형식으로 사용이 가능합니다. 
알아두실게 있다면, 모든 연산자들이 오버로딩의 대상이 되는것은 아니며(오버로딩이 불가능한 연산자들이 존재), 
기존에 존재하던 연산자의 기능에서 약간 더 추가하는 것뿐, 완전히 새로운 연산자를 만드는것은 아니라는 겁니다.


*/