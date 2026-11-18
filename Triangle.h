#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "ShapeException.h"
#include <iostream>

class Triangle //произвольный треугольник
{
protected:
    int sideA{}; //значения сторон
    int sideB{};
    int sideC{};

    int cornerA{}; //значения углов
    int cornerB{};
    int cornerC{};

    std::string shapeName{};

public:
    Triangle() = default;
    Triangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc, std::string shapeName);

    void PrintInfo();
};

#endif

