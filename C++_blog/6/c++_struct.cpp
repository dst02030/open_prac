#include <iostream>

using namespace std;

struct student {
    int id;
    char *name;
    floate percentage;
}; // 구조체 뒤에 세미콜론이 와야함

int main() {
    student s = {1, "김철수", 90.5};
    
    cout << "아이디: "<<s.id <<endl;
    cout << "이름: "<< s.name<<endl;
    cout << "백분율: "<<s.percentage<<endl;
    return 0;
}