#include <iostream>
using namespace std;
#define MAX 10
#include <string>
#include <string.h>

class record{
    private:
    char name[MAX];
    private:
    int course1, course2;
    double avg;
    
    public:
    record();
    record(char*, int);
    record(char*, int, int);
    void print();
};

record::record(char* str, int score){
    strcpy(name, str);
    course1 = course2= score;
    avg = score;
}

record::record(char *str, int score1, int score2){
    strcpy(name, str);
    course1 = score1;
    course2 = score2;
    avg = ((double)(course1+course2))/2.0;
}

record::record(){
    strcpy(name, "");
    course1=course2=100;
    avg=100;
}

record::print(){
    cout<<"my name is "<<name<<"course1 and 2 are "<< course1<< ", "<<course2<<endl;
}

int main(){
   // record yourRecord = {"Hong GD", 100, 100};    사용하지 않는 방법!! private 속이기에.
   // yourRecord.print();
    
    record myRecord;
    record hisRecord = record("Kim",80,100); // 명시적으로 기본생성자를 호출
    record herRecord("Lee",70); // 기본 생성자가 호출
    
    myRecord.print();
    hisRecord.print();
    herRecord.print();

    
    return 0;
}