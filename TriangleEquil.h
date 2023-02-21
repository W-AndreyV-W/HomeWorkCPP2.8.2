#pragma once
#include "Triangle.h"

class TriangleEquil :public Triangle {
public:
    TriangleEquil(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_) :TriangleEquil(side_a_, side_b_, side_c_, angle_a_, angle_b_, angle_c_, 3, "Равносторонний треугольник:") {}
    ~TriangleEquil();
protected:
    TriangleEquil(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_, int quanfig_, std::string name_);
};
