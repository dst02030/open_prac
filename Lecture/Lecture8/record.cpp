class record{
    private:
    char name[MAX];
    private:
    int course1, course2;
    double avg;
    public:
    record(){
        strcpy(name, ""); //name에 ""를 복사
        course1 = course2 = 100;
        avg = 100;
    }
    void print(void);
}