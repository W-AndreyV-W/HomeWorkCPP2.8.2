#pragma once
#include "FigureErrors.h"

class Figure :public FigureErrors {
public:
    virtual void print_info();
    ~Figure();
protected:
    void print_figure();
    Figure(int quanfig_, std::string name_);
    Figure() :Figure(3, "Фигура:") {}
private:
    int _quanfig;
    std::string _name;
};