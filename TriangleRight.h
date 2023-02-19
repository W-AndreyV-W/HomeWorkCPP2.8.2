#pragma once
#include <Triangle.h>

class TriangleRight :public Triangle {
public:
    TriangleRight() :TriangleRight(10, 20, 30, 30, 60, 90) {}
protected:
    TriangleRight(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_, int quanfig_, std::string name_, const char* name_error_);
private:
    TriangleRight(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_) :TriangleRight(side_a_, side_b_, side_c_, angle_a_, angle_b_,angle_c_, 3, "Прямоугольный треугольник:", " угол C не равен 90"){}
};