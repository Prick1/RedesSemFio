#ifndef POINT_H_
#define POINT_H_
#include <cmath>

struct Point{
    int x;
    int y;
    Point(int x,int y):x(x), y(y){}
    Point(){}
    unsigned int getDistance(Point b){ return sqrt((x - b.x)*(x - b.x) + (y - b.y)*(y - b.y));}
};


#endif