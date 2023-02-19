#include <Triangle.h>

void Triangle::print_info() {
    if (_quanfig == 3) {
        std::cout << _name << " (������� " << _side_a << ", " << _side_b << ", " << _side_c << "; ���� " << _angle_a << ", " << _angle_b << ", " << _angle_c << ") ������" << std::endl;
    }
    else if (_quanfig == 4){
        std::cout << _name << " (������� " << _side_a << ", " << _side_b << ", " << _side_c << ", " << _side_d << "; ���� " << _angle_a << ", " << _angle_b << ", " << _angle_c << ", " <<_angle_d << ") ������" << std::endl;
    }
   
}
Triangle::Triangle( int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_, int quanfig_, std::string name_, const char* name_error_) :FigureErrors(name_error_) {
    try {
        if (name_ == "�����������:") {
            if ((angle_a_ + angle_b_ + angle_c_) != 180) {
                throw FigureErrors(name_error_);
            }
        }
        if (name_ == "������������� �����������:") {
            if (angle_c_ != 90) {
                throw FigureErrors(name_error_);
            }
        }
        if (name_ == "�������������� �����������:") {
            if (side_a_ != side_c_ || angle_a_ != angle_c_) {
                throw FigureErrors(name_error_);
            }
        }
        if (name_ == "�������������� �����������:") {
            if (side_a_ != side_b_ || side_b_ != side_c_ || angle_a_ != angle_b_ || angle_b_ != angle_c_) {
                throw FigureErrors(name_error_);
            }
        }
        _side_a = side_a_;
        _side_b = side_b_;
        _side_c = side_c_;
        _angle_a = angle_a_;
        _angle_b = angle_b_;
        _angle_c = angle_c_;
        _quanfig = quanfig_;
        _name = name_;
    }
    catch (const FigureErrors& ex) {
        std::cout << "������ �������� ������. " << name_ <<  ex.what() << std::endl;
    }
}
Triangle::Triangle(int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_, int quanfig_, std::string name_, const char* name_error_) :FigureErrors(name_error_) {
    try {
        if (name_ == "���������������:") {
            if (side_a_ > 0 || side_b_ > 0 || side_c_ > 0 || side_d_ > 0 || angle_a_ + angle_b_ + angle_c_ + angle_d_ != 360) {
                throw FigureErrors(name_error_);
            }
        }
        if (name_ == "�������������:") {
            if (side_a_ != side_c_ || side_b_ != side_d_ || angle_a_ != 90 || angle_b_ != 90 || angle_c_ != 90 || angle_d_ != 90) {
                throw FigureErrors(name_error_);
            }
        }
        if (name_ == "�������:") {
            if (side_a_ != side_b_ || side_a_ != side_c_ || side_a_ != side_d_ || angle_a_ != 90 || angle_b_ != 90 || angle_c_ != 90 || angle_d_ != 90) {
                throw FigureErrors(name_error_);
            }
        }
        if (name_ == "��������������:") {
            if (side_a_ != side_c_ || side_b_ != side_d_ || angle_a_ != angle_c_ || angle_b_ != angle_d_) {
                throw FigureErrors(name_error_);
            }
        }
        if (name_ == "����:") {
            if (side_a_ != side_b_ || side_a_ != side_c_ || side_a_ != side_d_ || angle_a_ != angle_c_ || angle_b_ != angle_d_) {
                throw FigureErrors(name_error_);
            }
        }
        _side_a = side_a_;
        _side_b = side_b_;
        _side_c = side_c_;
        _side_d = side_d_;
        _angle_a = angle_a_;
        _angle_b = angle_b_;
        _angle_c = angle_c_;
        _angle_d = angle_d_;
        _quanfig = quanfig_;
        _name = name_;
    }
    catch (const FigureErrors& ex) {
        std::cout << "������ �������� ������. " << name_ << ex.what() << std::endl;
    }
}