class Table{
    private:
    Table(const Table&); //copy constructor
    Table &operator=(const Table&); //copy assignment
};

void h(){
    Table t1;
    Table t2 = t1; //copy initialization : trouble 
    Table t3 = t2; // copy assignment : trouble
    
}