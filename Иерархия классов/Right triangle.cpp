#include "Right Triangle.h"
#include <iostream>

RightTriangle::RightTriangle(double s1, double s2, double s3, double a1, double a2, double a3) :
    Triangle(s1, s2, s3, a1, a2, a3) {}

void RightTriangle::printInfo() const {
    Triangle::printInfo();
}