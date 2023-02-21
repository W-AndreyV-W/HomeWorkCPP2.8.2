#pragma once
#include "Figure.h"

class Quadrilateral :public Figure {
public:
    void print_info() override;
    Quadrilateral(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_) :Quadrilateral(side_a_, side_b_, side_c_, side_d_, angle_a_, angle_b_, angle_c_, angle_d_, 4, "Четырехугольник:") {}
    ~Quadrilateral();
protected:
    void print_quadrilateral();
    Quadrilateral(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_);
private: 
    int _side_a = 0;
    int _side_b = 0;
    int _side_c = 0;
    int _side_d = 0;
    int _angle_a = 0;
    int _angle_b = 0;
    int _angle_c = 0;
    int _angle_d = 0;
};