#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral{
public:
    Rectangle(double s1, double s2, double s3, double s4, double a1, double a2, double a3, double a4);
    void printInfo() const override;
};

#endif