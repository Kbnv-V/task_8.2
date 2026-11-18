#include "Parallelogram.h"

quadr::Parallelogram::Parallelogram(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd, std::string setShapeName) : 
    quadr::Quadrilateral(sda, sdb, sdc, sdd, crna, crnb, crnc, crnd, setShapeName)
{
    if (!(sideA == sideC && sideB == sideD))
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Стороны не равны");
    }
    else if (!(cornerA == cornerC && cornerB == cornerD))
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Углы не равны");
    }
};