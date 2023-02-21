#pragma once
#include "Quadrilateral.h"

class Parallelogram :public Quadrilateral {
public:
    Parallelogram(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_) :Parallelogram(side_a_, side_b_, side_c_, side_d_, angle_a_, angle_b_, angle_c_, angle_d_, 4, "��������������:") {}
    ~Parallelogram();
protected:
    Parallelogram(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_);
};