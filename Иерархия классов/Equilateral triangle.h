#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H
#include "Triangle.h"

class Equilateraltriangle : public Triangle {
public:
    Equilateraltriangle(double s1, double s2, double s3, double a1, double a2, double a3);
    void printInfo() const override;
};

#endif