#include <iostream>

using namespace std;

struct student {
    int id;
    char *name;
    float percentage;
    
    void Show(){
        cout << "아이디: "<< id<< endl;
        cout << "이름: "<< name << endl;
        cout << "백분율: "<< percentage << endl;
    }
}; // 구조체 뒤에 세미콜론이 와야함

int main(){
    struct student s = {1, "김철수", 90.5};
    s.Show();
    return 0;
}