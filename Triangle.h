#pragma once
#include<FigureErrors.h>

class Triangle :public FigureErrors {
public:
    void print_info();
    Triangle() :Triangle(10, 20, 30, 50, 60, 70) {}
protected:
    Triangle(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_, int quanfig_, std::string name_, const char* name_error_);
    Triangle(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_, const char* name_error_);
private:
    Triangle(int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_) :Triangle(side_a_, side_b_, side_c_, angle_a_, angle_b_, angle_c_, 3, "Треугольник:", " сумма углов не равна 180") {}
    int _side_a = 0;
    int _side_b = 0;
    int _side_c = 0;
    int _side_d = 0;
    int _angle_a = 0;
    int _angle_b = 0;
    int _angle_c = 0;
    int _angle_d = 0;
    int _quanfig = 0;
    std::string _name;
};