#ifndef SQUARE_H
#define SQUARE_H

#include "Quadrilateral.h"
#include "ShapeException.h"
#include <iostream>

namespace quadr
{
    class Square : public Quadrilateral //Квадрат
    {
    public:
        Square() = default;
        Square(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd, std::string setShapeName);
    };
}

#endif


