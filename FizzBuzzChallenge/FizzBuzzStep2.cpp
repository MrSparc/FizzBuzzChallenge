#include "FizzBuzzStep2.h"


std::string FizzBuzzStep2::ValueToDisplay(unsigned int i) const
{
	std::string str_val = std::to_string(i);

	if (str_val.find('3') != std::string::npos)
		return "lucky";

	return FizzBuzzStep1::ValueToDisplay(i);
}