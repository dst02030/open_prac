#include <iostream>

using namespace std;

void Swap (int &ref1, int &ref2)
{
    int temp = ref1;
    
    ref1 = ref2;
    ref2 = temp;
}

int main()
{
    int a = 50, b=40;
    
    cout << "Swap before, a: " << a << " b: " << b << endl;
    Swap(a,b);
    cout << "Swap after, a: " << a << " b: " << b << endl;
    return 0;
}