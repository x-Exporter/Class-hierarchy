#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double s1, double s2, double s3, double s4, double a1, double a2, double a3, double a4);
    void printInfo() const override;
};

#endif