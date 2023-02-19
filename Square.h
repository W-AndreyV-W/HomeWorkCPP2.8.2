#pragma once
#include <Rectrangle.h>

class Square :public Rectrangle {
public:
    Square() :Square(20, 20, 20, 20, 90, 90, 90, 80) {}
protected:
    Square(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_, const char* name_error_);
private:
    Square(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_) :Square(side_a_, side_b_, side_c_, side_d_, angle_a_, angle_b_, angle_c_, angle_d_, 4, " вадрат:", " стороны не равны и/или углы не равны 90") {}
};