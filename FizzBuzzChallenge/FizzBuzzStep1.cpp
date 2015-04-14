#include "FizzBuzzStep1.h"
#include <iostream>

std::string FizzBuzzStep1::Run(unsigned int first, unsigned int last) const
{
	std::string output = "";

	if (first > last)
		throw std::out_of_range("fist > last");
	
	for (auto i = first; i <= last; ++i)
	{
		output += ValueToDisplay(i);
		output.push_back(' ');
	}
	output.pop_back(); //Erases the space added in last loop iteration
	return output;
}

std::string FizzBuzzStep1::ValueToDisplay(unsigned int i) const
{
	if (i % 15 == 0)
		return  "fizzbuzz";
	
	if (i % 5 == 0)
		return "buzz";
	
	if (i % 3 == 0)
		return "fizz";
							
	return std::to_string(i);
}
