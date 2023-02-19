#include<FigureErrors.h>

const char* FigureErrors::what() const noexcept {
	return _name_error;
}
FigureErrors::FigureErrors(const char* name_error_) :std::runtime_error(name_error_){
	_name_error = name_error_;
}
