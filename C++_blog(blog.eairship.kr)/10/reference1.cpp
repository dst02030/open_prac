#include <iostream>

using namespace std;

int main(){
    int num = 50;
    int &num1 = num;
    
    cout << "num: " << &num << endl;
    
    cout << "num1: " << &num1 << endl;
    return 0;
}