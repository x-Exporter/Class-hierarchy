#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

class Quadrilateral {
protected:
    double side1, side2, side3, side4;
    double angle1, angle2, angle3, angle4;
public:
    Quadrilateral(double s1, double s2, double s3, double s4, double a1, double a2, double a3, double a4);
    virtual void printInfo() const;
};

#endif