#ifndef SQUARE_H
#define SQUARE_H
#include "Quadrilateral.h"

class Square : public Quadrilateral {
public:
    Square(double s1, double s2, double s3, double s4, double a1, double a2, double a3, double a4);
    void printInfo() const override;
};

#endif