#include "Parallelogram.h"

Parallelogram::Parallelogram(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_) :Quadrilateral((angle_a_ != angle_c_ || angle_b_ != angle_d_) ? throw FigureErrors("углы A,C и B,D попарно не равны") : (side_a_ != side_c_ || side_b_ != side_d_) ? throw FigureErrors("стороны a,c и b,d попарно не равны"): side_a_, side_b_, side_c_, side_d_, angle_a_, angle_b_, angle_c_, angle_d_, quanfig_, name_) {
}
Parallelogram::~Parallelogram(){}