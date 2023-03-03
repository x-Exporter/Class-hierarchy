#include "Triangle.h"
#include "Right Triangle.h"
#include <iostream>
#include "Isosceles triangle.h"
#include "Equilateral triangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    cout << "Треугольник" << endl;
    triangle.printInfo();
    cout << "Прямоугольный треугольник" << endl;
    RightTriangle rt(10, 20, 30, 50, 60, 90);
    rt.printInfo();
    cout << "Равнобедренный треугольник" << endl;
    Isoscelestriangle it(10, 20, 10, 50, 60, 50);
    it.printInfo();
    cout << "Равносторонний треугольник" << endl;
    Equilateraltriangle et(30, 30, 30, 60, 60, 60);
    et.printInfo();
    cout << "Четырехугольник" << endl;
    Quadrilateral ql(10, 20, 30, 40, 50, 60, 70, 80);
    ql.printInfo();
    cout << "Прямоугольник" << endl;
    Rectangle rc(10, 20, 10, 20, 90, 90, 90, 90);
    rc.printInfo();
    cout << "Квадрат" << endl;
    Square sq(20, 20, 20, 20, 90, 90, 90, 90);
    sq.printInfo();
    cout << "Параллелограм" << endl;
    Parallelogram pl(20, 30, 20, 30, 30, 40, 30, 40);
    pl.printInfo();
    cout << "Ромб" << endl;
    Rhomb r(30, 30, 30, 30, 30, 40, 30, 40);
    r.printInfo();
}