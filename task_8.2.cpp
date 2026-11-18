#include <iostream>
#include <exception>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include "ShapeException.h"
#include <Windows.h>


int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    try
    {
        Triangle t(10, 20, 30, 60, 60, 60, "Треугольник");
        t.PrintInfo();
    }
    catch (ShapeException exp)
    {
        std::cerr << exp.what() << std::endl;
    }

    try
    {
        RightTriangle rt(10, 20, 30, 30, 60, 90, "Прямоугольный треугольник");
        rt.PrintInfo();
    }
    catch (ShapeException exp)
    {
        std::cerr << exp.what() << std::endl;
    }

    try
    {
        IsoscelesTriangle it(20, 20, 10, 50, 80, 50, "Равнобедренный треугольник");
        it.PrintInfo();
    }
    catch (ShapeException exp)
    {
        std::cerr << exp.what() << std::endl;
    }

    try
    {
        EquilateralTriangle et(30, 30, 30, 60, 60, 60, "Равносторонний треугольник");
        et.PrintInfo();
    }
    catch (ShapeException exp)
    {
        std::cerr << exp.what() << std::endl;
    }

    std::cout << std::endl; //пробел

    try
    {
        quadr::Quadrilateral q(10, 20, 30, 40, 70, 80, 90, 120, "Четырёхугольник");
        q.PrintInfo();
    }
    catch (ShapeException exp)
    {
        std::cerr << exp.what() << std::endl;
    }

    try
    {
        quadr::Rectangle r(10, 20, 10, 20, 90, 90, 90, 90, "Прямоугольник");
        r.PrintInfo();
    }
    catch (ShapeException exp)
    {
        std::cerr << exp.what() << std::endl;
    }

    try
    {
        quadr::Square s(20, 20, 20, 20, 90, 90, 90, 90, "Квадрат");
        s.PrintInfo();
    }
    catch (ShapeException exp)
    {
        std::cerr << exp.what() << std::endl;
    }

    try
    {
        quadr::Parallelogram p(0, 30, 20, 30, 100, 80, 100, 80, "Параллелограм");
        p.PrintInfo();
    }
    catch (ShapeException exp)
    {
        std::cerr << exp.what() << std::endl;
    }

    try
    {
        quadr::Rhomb rh(30, 30, 30, 30, 100, 80, 100, 80, "Ромб");
        rh.PrintInfo();
    }
    catch (ShapeException exp)
    {
        std::cerr << exp.what() << std::endl;
    }
}
