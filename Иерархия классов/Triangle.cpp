#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double s1, double s2, double s3, double a1, double a2, double a3) :
    side1(s1), side2(s2), side3(s3), angle1(a1), angle2(a2), angle3(a3) {}

void Triangle::printInfo() const {
    std::cout << "Стороны: " << side1 << " " << side2 << " " << side3 << std::endl;
    std::cout << "Углы: " << angle1 << " " << angle2 << " " << angle3 << std::endl;
}