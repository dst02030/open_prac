#include <iostream>

class ChangePocketClass{
    public:
    //rest of member functions as shown before
    
    //Copy constructor-called when a copy of an object is needed
    ChangePocketClass(const ChangePocketClass &copy){
        quarters = copy.quarters;
        dimes = copy.dimes;
    }
    
    //Assignment operator-called when one object is assigned to another
    void operator = (const ChangePocketClass rhs)
    {
        quarters = rhs.quarters;
        dimes = rhs.dimes;
    }
    
    
    ChangePocketClass():quarters(0),dimes(0) // quarters와 dimes 할당과 동시에 초기화 하기 위해서
    {
        
    }
    
    ChangePocketClass(int q, int d):
    quarters(q), dimes(d)
    {
        
    }
    
    void setQuarters(int val)
    {
        quarters = val;
    }
    void setDimes(int val)
    {
        dimes = val;
    }
    int getQuarters()
    {
        return quarters;
    }
    int getDimes()
    {
        return dimes;
    }
    private:
    int quarters;
    int dimes;
};

int main()
{
    ChangePocketClass c1;
    ChangePocketClass c2;
    ChangePocketClass c3;
    c1.setQuarters(5);
    c1.setDimes(7);
    c2.setQuarters(3);
    c2.setDimes(8);
    
    c3=c1+c2;
    
    return 0;
}