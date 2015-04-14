#pragma once
#include <string>

class FizzBuzzStep1
{
public:
	FizzBuzzStep1() = default;
	virtual ~FizzBuzzStep1() = default;

	virtual std::string Run(unsigned int first, unsigned int last) const;

protected:
	virtual std::string ValueToDisplay(unsigned int i) const;
};

