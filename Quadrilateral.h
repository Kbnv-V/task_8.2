#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include <iostream>
#include "ShapeTemplate.h"
#include "ShapeException.h"

namespace quadr
{
    class Quadrilateral //произвольный четырехугольник
    {
    protected:
        int sideA{}; //значения сторон
        int sideB{};
        int sideC{};
        int sideD{};

        int cornerA{}; //значения углов
        int cornerB{};
        int cornerC{};
        int cornerD{};

        std::string shapeName{};

    public:
        Quadrilateral() = default;
        Quadrilateral(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd, std::string setShapeName);

        void PrintInfo();
    };
}

#endif

