#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"
#include "ShapeException.h"
#include <iostream>

namespace quadr
{
    class Parallelogram : public Quadrilateral //Параллелограм
    {
    public:
        Parallelogram() = default;
        Parallelogram(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd, std::string setShapeName);
    };
}

#endif

