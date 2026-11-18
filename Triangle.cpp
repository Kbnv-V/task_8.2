#include "Triangle.h"

Triangle::Triangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc, std::string setShapeName) :
    sideA(sda),
    sideB(sdb),
    sideC(sdc),
    cornerA(crna),
    cornerB(crnb),
    cornerC(crnc),
    shapeName(setShapeName)
{
    if ((cornerA + cornerB + cornerC) != 180)
    {
        throw ShapeException(shapeName + ": Ошибка создания фигуры! Сумма углов не равна 180");
    }
    else if (!(sideA && sideB && sideC))
    {
        throw ShapeException(shapeName + ": Ошибка создания фигуры! У фигуры менее трех сторон");
    }
};

void Triangle::PrintInfo()
{
    std::cout << shapeName << " (cтороны " << sideA << ", " << sideB << ", " << sideC << "; ";
    std::cout << "углы " << cornerA << ", " << cornerB << ", " << cornerC << ")";
    std::cout << " создан" << std::endl;
}