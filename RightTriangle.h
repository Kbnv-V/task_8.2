#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "ShapeException.h"
#include "Triangle.h"
#include <iostream>

class RightTriangle : public Triangle //прямоугольный треугольник
{
public:
    RightTriangle() = default;
    RightTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc, std::string shapeName);
};

#endif
