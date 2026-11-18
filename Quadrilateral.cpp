#include "Quadrilateral.h"

quadr::Quadrilateral::Quadrilateral(int sda, int sdb, int sdc, int sdd, int crna, int crnb, int crnc, int crnd, std::string setShapeName) :
    sideA(sda),
    sideB(sdb),
    sideC(sdc),
    sideD(sdd),
    cornerA(crna),
    cornerB(crnb),
    cornerC(crnc),
    cornerD(crnd),
    shapeName(setShapeName)
{
    if (!(sideA && sideC && sideB && sideD))
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Менее 4 сторон");
    }
    else if ((cornerA + cornerB + cornerC + cornerD) != 360)
    {
        throw ShapeException(shapeName + ": Ошибка при создании фигуры! Сумма углов не равна 360 градусам");
    }
};

void quadr::Quadrilateral::PrintInfo()
{
    std::cout << shapeName << "(cтороны " << sideA << ", " << sideB << ", " << sideC << ", " << sideD << "; ";
    std::cout << "углы " << cornerA << ", " << cornerB << ", " << cornerC << ", " << cornerD << ")";
    std::cout << " создан" << std::endl;
}