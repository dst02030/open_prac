#include <iostream>

struct student{
    unsigned int studentID;
    char name[5];
    unsigned int score;
    char grade;
};

student mydata = {21600695, "JoHJ",100,'A'};

int main(){
    std::cout<<mydata.name<<std::endl;

    
}