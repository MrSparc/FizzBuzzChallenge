#include "FizzBuzzStep3.h"
#include <algorithm>
#include <sstream>
#include <vector>

bool isInteger(std::string s)
{
	try{
		std::stoi(s);
		return true;
	}
	catch (std::invalid_argument)
	{
		return false;
	}
}


std::string FizzBuzzStep3::Run(unsigned int first, unsigned int last) const
{
	std::string output = FizzBuzzStep2::Run(first, last);

	std::vector<std::string> v;
	std::istringstream is(output);
	for (std::string token; getline(is, token, ' ');)
		v.push_back(token);
	
	auto cnt_fizz = std::count(v.begin(), v.end(), std::string("fizz"));
	auto cnt_buzz = std::count(v.begin(), v.end(), std::string("buzz"));
	auto cnt_fizbuzz = std::count(v.begin(), v.end(), std::string("fizzbuzz"));
	auto cnt_lucky = std::count(v.begin(), v.end(), std::string("lucky"));
	auto cnt_integer = std::count_if(v.begin(), v.end(), isInteger);

	std::ostringstream os;
	os << output << std::endl <<
		"fizz: " << cnt_fizz << std::endl <<
		"buzz: " << cnt_buzz << std::endl <<
		"fizzbuzz: " << cnt_fizbuzz << std::endl <<
		"lucky: " << cnt_lucky << std::endl <<
		"integer: " << cnt_integer;
	
	return os.str();
}