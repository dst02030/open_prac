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

int Human::GetAge(){
    return age;
}

char* Human::GetName(){
    return name;
}

void Human::AskName(Human other_person){
    cout<<GetName() << ":"<<"Hi, What is your name?"<<endl;
    other_person.What_is_your_name();
}

void Human::AskAge(Human other_person){
    cout<<GetName()<<":"<<"How_Old_are_you?" <<endl;
    other_person.How_Old_are_you();
}

void Human::What_is_your_name(){
    cout<<GetName()<<":"<<"Hello, I am" << GetName() << endl;
}

void Human::How_Old_are_you(){
    cout<<GetName()<<":"<<"I am"<<GetAge()<<"."<<endl;
}

Human::Human(){
    age = -1;
    height = 0.0;
    name = "";
}

Human::Human(int Age, double Height, char* Name){
    aget = Age;
    height = Height;
    name = Name;
}

void human::Aging(){
    age++;
}

void human::Growing(){
    height+=0.5;
}