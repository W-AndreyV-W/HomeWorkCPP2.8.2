#pragma once
#include<iostream>
#include<stdexcept>

class FigureErrors :public std::runtime_error {
public:
	const char* what() const noexcept override;
FigureErrors(const char* name_error_);
protected:
	
private:
	const char* _name_error;
};
