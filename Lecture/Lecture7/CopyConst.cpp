class Table{
    private:
    Table(const Table&); //copy constructor
    Table &operator=(const Table&); //copy assignment
};

Table::Table(const Table &t){
    p=new Name[sz=t.sz];
    for (int I=0; I<sz; i++)p[I]=t.p[I];
}

Table &Table::operator=(const Table& t) // assignment
{
    if(this != &t){
        //beware of self-assignment: t=t
        delete[] p;
        p = new Name[sz=t.sz];
        for(int i=0; i<sz; i++) p[i]=t.p[i];
    }
    return *this;
}

void h(){
    Table t1;
    Table t2 = t1; //copy initialization : trouble 
    Table t3 = t2; // copy assignment : trouble
    
}