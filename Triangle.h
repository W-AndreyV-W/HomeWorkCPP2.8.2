#pragma once
#include"Figure.h"

class Triangle :public Figure {
public:
    void print_info() override;
    Triangle(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_) :Triangle(side_a_, side_b_, side_c_, angle_a_, angle_b_, angle_c_, 3, "Треугольник:") {}
    ~Triangle();
protected:
    void print_triangle();
    Triangle(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_, int quanfig_, std::string name_);
private:
    int _side_a = 0;
    int _side_b = 0;
    int _side_c = 0;
    int _angle_a = 0;
    int _angle_b = 0;
    int _angle_c = 0;
};