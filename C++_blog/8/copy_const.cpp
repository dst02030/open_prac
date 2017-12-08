#include <iostream>

using namespace std;

class MyClass{
    private:
    int num1;
    int num2;
    
    public:
    MyClass(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    
    /*복사 생성자는 디폴트 생성자 처럼 컴파일러 중간에 형성
    MyClass(const MyClass& mc)
    {
        num1 = mc.num1;
        num2 = mc.num2;
        }
        */
    
    void ShowData()
    {
        cout << "num1: " << num1 << "num2: "<< num2 << endl;
    }
};

int main(){
    MyClass mc1(50, 40);
    MyClass mc2 = mc1;
    
    mc2.ShowData();
    return 0;
}