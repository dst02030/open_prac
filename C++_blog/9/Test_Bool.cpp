#include <iostream>

using namespace std;

int main(){
    int a,b;
    bool isMax;
    
    cin >> a >> b ;
    
    if(a>b) isMax = true;
    else isMax = false;
    
    cout << "isMax: " << isMax << endl;
    
    return 0;
}