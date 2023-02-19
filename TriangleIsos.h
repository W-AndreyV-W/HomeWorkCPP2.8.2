#pragma once
#include <Triangle.h>

class TriangleIsos :public Triangle {
public:
    TriangleIsos() :TriangleIsos(10, 20, 10, 50, 60, 70) {}
protected:
    TriangleIsos(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_, int quanfig_, std::string name_, const char* name_error_);
private:
    TriangleIsos(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_) :TriangleIsos(side_a_, side_b_, side_c_, angle_a_, angle_b_, angle_c_, 3, "Равнобедренный треугольник:", " стороны a и c не равны и/или углы A и C не равны") {}
};