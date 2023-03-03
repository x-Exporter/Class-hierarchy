#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
protected:
    double side1, side2, side3;
    double angle1, angle2, angle3;
public:
    Triangle(double s1, double s2, double s3, double a1, double a2, double a3);
    virtual void printInfo() const;
};

#endif