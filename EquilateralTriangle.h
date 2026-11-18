#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include "Triangle.h"
#include "ShapeException.h"
#include <iostream>

class EquilateralTriangle : public Triangle //равносторонний треугольник
{
public:
    EquilateralTriangle() = default;
    EquilateralTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc, std::string shapeName);
};

#endif

