#pragma once
#include<iostream>
#include<stdexcept>

class FigureErrors :public std::runtime_error {
public:
	FigureErrors() :FigureErrors("Ошибка") {}
	~FigureErrors();
	FigureErrors(const char* name_error_);
};
