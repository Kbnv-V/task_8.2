#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"
#include "ShapeException.h"
#include <iostream>

namespace quadr
{
    class Rectangle : public Quadrilateral //Прямоугольник
    {
    public:
        Rectangle() = default;
        Rectangle(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd, std::string setShapeName);
    };
}

#endif

