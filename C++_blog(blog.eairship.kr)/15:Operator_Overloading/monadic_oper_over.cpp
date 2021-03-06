#include <iostream>

using namespace std;

class NUMBOX
{
    private:
    int num1, num2;
    
    public:
    NUMBOX(){
        
    }
    
    NUMBOX(int num1, int num2) :num1(num1), num2(num2){
        
    }
    
    void ShowNumber(){
        cout << "num1: " << num1 << ", num2: " << num2 << endl;
    }
    
    NUMBOX operator++()
    {
        num1+=1;
        num2+=1;
        return *this;
    }
    
    NUMBOX operator ++(int){
        NUMBOX temp(*this);
        num1 +=1;
        num2+=1;
        return temp;
    }
};

int main(){
    NUMBOX nb1 (10,20);
    NUMBOX nb2;
    
    nb2 = nb1++;
    nb2.ShowNumber();
    nb1.ShowNumber();
    
    nb2 = ++nb1;
    nb2.ShowNumber();
    nb1.ShowNumber();
}

// ++nb = nb.operator++(); // 전위 증가 연산
// nb++ = nb.operator++(int); // 후위 증가 연산