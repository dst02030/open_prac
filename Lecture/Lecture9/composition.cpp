#include <iostream>

class Point{
    public:
    int x;
    int y;
};

class Circle{
    public:
    Point center;
    int radius;
};

class Cylinder{
    public:
    Circle center;
    int height;
};

int main(){
    Cylinder a;
    a.center.center.x = 3;
    a.center.radius = 8;
    a.height = 9;
}