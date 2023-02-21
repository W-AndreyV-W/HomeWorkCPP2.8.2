#include "TriangleRight.h"

TriangleRight::TriangleRight(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_, int quanfig_, std::string name_) :Triangle((angle_c_ != 90) ? throw FigureErrors("угол C не равен 90") : side_a_, side_b_, side_c_, angle_a_, angle_b_, angle_c_, quanfig_, name_) {
}

TriangleRight::~TriangleRight() {}