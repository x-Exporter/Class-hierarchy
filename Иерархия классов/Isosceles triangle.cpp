#include "Isosceles triangle.h"
#include <iostream>

Isoscelestriangle::Isoscelestriangle(double s1, double s2, double s3, double a1, double a2, double a3) :
    Triangle(s1, s2, s3, a1, a2, a3) {}

void Isoscelestriangle::printInfo() const {
    Triangle::printInfo();
}