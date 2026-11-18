#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "Triangle.h"
#include "ShapeException.h"
#include <iostream>

class IsoscelesTriangle : public Triangle //равнобедренный треугольник
{
public:
    IsoscelesTriangle() = default;
    IsoscelesTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc, std::string shapeName);
};

#endif

