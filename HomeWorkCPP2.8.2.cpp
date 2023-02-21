#include <iostream>
#include <windows.h>

#include "Triangle.h"
#include "TriangleRight.h"
#include "TriangleIsos.h"
#include "TriangleEquil.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Rectrangle.h"
#include "Square.h"



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    try {
        Triangle triangle(10, 20, 30, 30, 60, 90);
        triangle.print_info();
    }

    catch (const FigureErrors& ex) {
        std::cout << "Ошибка создания треугольника. Причина: " << ex.what() << std::endl;
    }

    try {
        TriangleRight triangleRight(10, 20, 30, 30, 60, 90);
        triangleRight.print_info();
    }
    catch (const FigureErrors& ex) {
        std::cout << "Ошибка создания прямоугольного треугольника. Причина: " << ex.what() << std::endl;
    }

    try {
        TriangleIsos triangleIsos(10, 20, 30, 30, 60, 90);
        triangleIsos.print_info();

    }
    catch (const FigureErrors& ex) {
        std::cout << "Ошибка создания равнобедренного треугольника. Причина: " << ex.what() << std::endl;
    }

    try {
        TriangleEquil triangleEquil(10, 20, 30, 30, 60, 90);
        triangleEquil.print_info();
    }
    catch (const FigureErrors& ex) {
        std::cout << "Ошибка создания равностороннего треугольника. Причина: " << ex.what() << std::endl;
    }
    
    try {
        Quadrilateral quadrilateral(10, 20, 30, 40, 120, 60, 120, 60);
        quadrilateral.print_info();
    }
    catch (const FigureErrors& ex) {
        std::cout << "Ошибка создания четырехугольника. Причина: " << ex.what() << std::endl;
    }
    
    try {
        Parallelogram parallelogram(10, 20, 30, 40, 120, 60, 120, 60);
        parallelogram.print_info();
    }
    catch (const FigureErrors& ex) {
        std::cout << "Ошибка создания параллелограмма. Причина: " << ex.what() << std::endl;
    }
    
    try {
        Rhombus rhombus(110, 20, 30, 40, 120, 60, 120, 60);
        rhombus.print_info();
    }
    catch (const FigureErrors& ex) {
        std::cout << "Ошибка создания ромба. Причина: " << ex.what() << std::endl;
    }
    
    try {
        Rectrangle rectrangle(10, 20, 30, 40, 120, 60, 120, 60);
        rectrangle.print_info();
    }
    catch (const FigureErrors& ex) {
        std::cout << "Ошибка создания прямоугольника. Причина: " << ex.what() << std::endl;
    }
    
    try {
        Square square(10, 20, 30, 40, 120, 60, 120, 60);
        square.print_info();
    }
    catch (const FigureErrors& ex) {
        std::cout << "Ошибка создания квадрата. Причина: " << ex.what() << std::endl;
    }
}