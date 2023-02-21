#include "Quadrilateral.h"


void Quadrilateral::print_quadrilateral() {
    std::cout << " (стороны " << _side_a << ", " << _side_b << ", " << _side_c << ", " << _side_d << "; углы " << _angle_a << ", " << _angle_b << ", " << _angle_c << ", " << _angle_d << ") создан";
}

void Quadrilateral::print_info() {
    Figure::print_figure();
    Quadrilateral::print_quadrilateral();
    std::cout << std::endl;
}

Quadrilateral::Quadrilateral(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_) :Figure((angle_a_ + angle_b_ + angle_c_ + angle_d_ != 360) ? throw FigureErrors("сумма углов не равна 360") : (side_a_ <= 0 || side_b_ <= 0 || side_c_ <= 0 || side_d_ <= 0) ? throw FigureErrors("количество сторон не равно 4") : quanfig_, name_) {
    _side_a = side_a_;
    _side_b = side_b_;
    _side_c = side_c_;
    _side_d = side_d_;
    _angle_a = angle_a_;
    _angle_b = angle_b_;
    _angle_c = angle_c_;
    _angle_d = angle_d_;
}

Quadrilateral::~Quadrilateral(){}