#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc, std::string setShapeName) :
    Triangle(sda, sdb, sdc, crna, crnb, crnc, setShapeName)
{
    if (sda != sdc)
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Сторона A не равна стороне C");
    }
    else if (crna != crnc)
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Угол A не равен углу C");
    }
};