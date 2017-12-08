#include <iostream>
#define PI 3.141592
//#define CU(X) ((X)*(X)*(X))

inline int CU(int x)
{
    return x*x*x;
}

using namespace std;

int main()
{
    cout<< PI << endl;
    cout << CU(7) <<endl;
    return 0;
}