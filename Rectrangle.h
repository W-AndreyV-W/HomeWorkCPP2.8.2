#pragma once
#include "Parallelogram.h"

class Rectrangle :public  Parallelogram {
public:
    Rectrangle(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_) :Rectrangle(side_a_, side_b_, side_c_, side_d_, angle_a_, angle_b_, angle_c_, angle_d_, 4, "Прямоугольник:") {}
    ~Rectrangle();
protected:
    Rectrangle(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_);
};