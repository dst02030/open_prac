#include <iostream>
using namespace std;
int main(void){
    int sum, i, n;
    cin >> n;
    sum = 0;
    for (i=1; i<=n; i++)sum +=i;
    cout<<"sum= "<<sum<<endl;
    return 0;
}