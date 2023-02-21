#include "Rhombus.h"

Rhombus::Rhombus(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_) :Parallelogram((side_a_ != side_b_ || side_a_ != side_c_ || side_a_ != side_d_) ? throw FigureErrors("������� �� �����") : side_a_, side_b_, side_c_, side_d_, angle_a_, angle_b_, angle_c_, angle_d_, quanfig_, name_) {
}

Rhombus::~Rhombus() {}