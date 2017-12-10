#include <iostream>

using namespace std;

class MyClass{
    private:
    int num1;
    int num2;
    
    public:
    MyClass(int num1, int num2){
        this->num1 = num1;
        this->num2 = num2;
    }
    
    void GetInfo(){
        cout << "num1: " << num1 << endl;
        cout << "num2: " << num2 << endl;
    }
};

int main(){
    MyClass mc(10, 20);
    
    mc.GetInfo();
    return 0;
}