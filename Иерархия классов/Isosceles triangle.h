#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H
#include "Triangle.h"

class Isoscelestriangle : public Triangle {
public:
    Isoscelestriangle(double s1, double s2, double s3, double a1, double a2, double a3);
    void printInfo() const override;
};

#endif