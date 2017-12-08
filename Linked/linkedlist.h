#pragma once

class IntegerNode
{
    private:
    IntegerNode(); // argument를 아무것도 안넣고 intiation 하면 안된다!! 왜냐! private에 있기 떄문이다.
    //Body가 없고, cpp에 바디가 있다.
    
    int value;
    IntegerNode* pNext;
    
    public:
    IntegerNode(int val, IntegerNode* next);
    
    int get_value(){
        return value; //여기다가 함수 내용 정의해도 됨!
    }
    
    IntegerNode* get_next(){
        return pNext;
    }
};