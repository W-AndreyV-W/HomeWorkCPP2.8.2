#include "TriangleIsos.h"

TriangleIsos::TriangleIsos(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_, int quanfig_, std::string name_) :Triangle((side_a_ != side_c_) ? throw FigureErrors("??????? a ? c ?? ?????") : (angle_a_ != angle_c_) ? throw FigureErrors("???? A ? C ?? ?????") : side_a_, side_b_, side_c_, angle_a_, angle_b_, angle_c_, quanfig_, name_) {
}

TriangleIsos::~TriangleIsos(){}