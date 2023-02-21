#include "Triangle.h"

void Triangle::print_triangle() {
std::cout <<" (стороны " << _side_a << ", " << _side_b << ", " << _side_c << "; углы " << _angle_a << ", " << _angle_b << ", " << _angle_c << ") создан";
}

void Triangle::print_info() {
    Figure::print_figure();
    Triangle::print_triangle();
    std::cout << std::endl;
}

Triangle::Triangle(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_, int quanfig_, std::string name_) :Figure((angle_a_ + angle_b_ + angle_c_ != 180) ? throw FigureErrors("сумма углов не равна 180") : (side_a_ <= 0 || side_b_ <= 0 || side_c_ <= 0) ? throw FigureErrors("количество сторон не равно 3") : quanfig_, name_) {
    _side_a = side_a_;
    _side_b = side_b_;
    _side_c = side_c_;
    _angle_a = angle_a_;
    _angle_b = angle_b_;
    _angle_c = angle_c_;
}

Triangle::~Triangle(){}