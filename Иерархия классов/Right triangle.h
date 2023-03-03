#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H
#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double s1, double s2, double s3, double a1, double a2, double a3);
    void printInfo() const override;
};

#endif