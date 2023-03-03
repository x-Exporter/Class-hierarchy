#include "Quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(double s1, double s2, double s3,double s4, double a1, double a2, double a3,double a4):
    side1(s1), side2(s2), side3(s3), side4(s4), angle1(a1), angle2(a2), angle3(a3),angle4(a4){}

void Quadrilateral::printInfo() const {
    std::cout << "Стороны: " << side1 << " " << side2 << " " << side3 << " " << side4 << std::endl;
    std::cout << "Углы: " << angle1 << " " << angle2 << " " << angle3 << " " << angle4 << std::endl;
}