#include "Parallelogram.h"
#include <iostream>

Parallelogram::Parallelogram(double s1, double s2, double s3, double s4, double a1, double a2, double a3, double a4) :
    Quadrilateral(s1, s2, s3, s4, a1, a2, a3, a4) {}

void Parallelogram::printInfo() const {
    Quadrilateral::printInfo();
}