#pragma once
#include <Parallelogram.h>

class Rhombus :public Parallelogram {
public:
    Rhombus() :Rhombus(30, 30, 30, 30, 40, 50, 40 ,50) {}
protected:
    Rhombus(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_, const char* name_error_);
private:
    Rhombus(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_) :Rhombus(side_a_, side_b_, side_c_, side_d_, angle_a_, angle_b_, angle_c_, angle_d_, 4, "Ромб:", " стороны не равны и/или углы A,C и B,D попарно не равны") {}
};