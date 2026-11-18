#include "RightTriangle.h"

RightTriangle::RightTriangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc, std::string setShapeName) :
    Triangle(sda, sdb, sdc, crna, crnb, crnc, setShapeName)
{
    if (cornerC != 90)
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Угол C не равен 90 градусам!");
    }
}