#include<iostream>
using namespace std;
#include<string.h>

class record{
    public:
    char *name;
    private:
    int course1, course2;
    double avg;
    public:
    record(char *str ="", int s1 = 100, int s2 = 100);
    ~record();
    void print(void);
};

record::~record(){
    delete []name;
}

record::record(char *str, int s1, int s2){
    name = new char[strlen(str)+1];
    strcpy(name, str);
    course1 = s1;
    course2 = s2;
    avg = ((double)(s1+s2))/2;
}

void record::print(void){return 0;};

int main(){
    record *myRecord = new record();
    record *yourRecord = new record("KIM", 90,100);
    
    myRecord->print();
    yourRecord->print();
    
    delete myRecord, yourRecord;
    
    return 0;
}