#pragma once
#include <Triangle.h>

class Quadrilateral :public Triangle {
public:
    Quadrilateral() :Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80) {}
protected:
    Quadrilateral(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_, const char* name_error_);
private:
    Quadrilateral(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_) :Quadrilateral(side_a_, side_b_, side_c_, side_d_, angle_a_, angle_b_, angle_c_, angle_d_, 4, "Четырехугольник:", " количество сторон не равно 4 и/или сумма углов не равна 360") {}
};