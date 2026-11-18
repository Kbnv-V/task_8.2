#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc, std::string setShapeName) :
    Triangle(sda, sdb, sdc, crna, crnb, crnc, setShapeName)
{
    if (!(sda == sdc && sdb == sdc))
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Стороны не равны");
    }
    else if (!(crna == crnb && crnb == crnc))
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Углы не равны");
    }
};