#include <iostream>
#include "point.h"
#include "math.h"
using namespace std;

class Triangle{
    private:
        Point vertex1;
        Point vertex2;
        Point vertex3;
    public:
        Triangle();
        Triangle(Point vertex1,Point vertex2,Point vertex3);
        double calculatePerimeter();
        double calculateArea();
};
Triangle::Triangle(){
    vertex1 = Point(0, 0);
    vertex2 = Point(50, 30);
    vertex3 = Point(25, 10);
}
Triangle::Triangle(Point vertex1, Point vertex2, Point vertex3){
    this->vertex1 = vertex1;
    this->vertex2 = vertex2;
    this->vertex3 = vertex3;
}
double Triangle::calculatePerimeter(){
    double d1, d2, d3, perimeter;
    d1 = vertex1.calculateDistance(vertex2);
    d2 = vertex2.calculateDistance(vertex3);
    d3 = vertex3.calculateDistance(vertex1);
    perimeter = d1 + d2 + d3;
    return perimeter;
}
double Triangle::calculateArea(){
    double d1, d2, d3, s, area;
    d1 = vertex1.calculateDistance(vertex2);
    d2 = vertex2.calculateDistance(vertex3);
    d3 = vertex3.calculateDistance(vertex1);
    s = (d1+d2+d3)/2;
    area = sqrt(s * (s - d1) * (s - d2) * (s - d3));
    return area;
}