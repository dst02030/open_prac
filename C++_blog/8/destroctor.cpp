#include <iostream>

using namespace std;

class ExConstructor{
    public:
    ExConstructor(){
        cout << "Exconstructor() called!" << endl;
    }
    
    ~Exconstructor(){
        cout << "Exconstructor() called!" << endl;
    }
};

int main()
{
    Exconstructor ec;
    
    return 0;
}