#include "Square.h"

quadr::Square::Square(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd, std::string setShapeName) :
    quadr::Quadrilateral(sda, sdb, sdc, sdd, crna, crnb, crnc, crnd, setShapeName)
{
    if (!(sideA == sideB && sideB == sideC && sideC == sideD))
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Стороны не равны!");
    }
    else if (!(cornerA == cornerB && cornerB == cornerC && cornerC == cornerD && cornerD == 90))
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Углы не равны 90 градусам!");
    }
}