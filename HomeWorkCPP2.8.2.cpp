#include <iostream>
#include <windows.h>

#include <Triangle.h>
#include <TriangleRight.h>
#include <TriangleIsos.h>
#include <TriangleEquil.h>
#include <Quadrilateral.h>
#include <Parallelogram.h>
#include <Rhombus.h>
#include <Rectrangle.h>
#include <Square.h>



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Triangle triangle;
    TriangleRight triangleRight;
    TriangleIsos triangleIsos;
    TriangleEquil triangleEquil;
    Quadrilateral quadrilateral;
    Parallelogram parallelogram;
    Rhombus rhombus;
    Rectrangle rectrangle;
    Square square;
    triangle.print_info();
    triangleRight.print_info();
    triangleIsos.print_info();
    triangleEquil.print_info();
    quadrilateral.print_info();
    rectrangle.print_info();
    square.print_info();
    parallelogram.print_info();
    rhombus.print_info();
}