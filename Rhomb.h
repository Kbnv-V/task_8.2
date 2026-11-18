#ifndef RHOMB_H
#define RHOMB_H

#include "Quadrilateral.h"
#include "ShapeException.h"
#include <iostream>

namespace quadr
{
    class Rhomb : public Quadrilateral
    {
    public:
        Rhomb() = default;
        Rhomb(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd, std::string setShapeName);
    };
}

#endif

