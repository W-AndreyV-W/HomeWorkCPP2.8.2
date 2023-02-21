#include "Figure.h"


void Figure::print_figure() {
    std::cout << _name;
}

void Figure::print_info() {
    Figure::print_figure();
    std::cout << std::endl;
}

Figure::Figure(int quanfig_, std::string name_) {
    _quanfig = quanfig_;
    _name = name_;
}

Figure::~Figure() {}
