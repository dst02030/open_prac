#include <iostream>
using namespace std;
class Human{
    private:
    int age;
    double height;
    char* name;
    public:
    Human();
    Human(int, double, char*);
    
    void AskName(Human);
    void AskAge(Human);
    int GetAge();
    char* GetName();
    void What_is_your_name();
    void How_Old_are_you();
    
    private:
    void Aging();
    void Growing();
};

