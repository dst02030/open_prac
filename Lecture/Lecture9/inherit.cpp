#include <iostream>

class Point{
    public:
    int x; int y;
};

class Circle:public Point{
    public:
    int radius;
};

class Cylinder:public Point{
    int height;
};

int main(){
    Circle a;
    a.x = 3;
    a.radius = 9;
}