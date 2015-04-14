#pragma once
#include "FizzBuzzStep2.h"
class FizzBuzzStep3 :
	public FizzBuzzStep2
{
public:
	FizzBuzzStep3() = default;
	virtual ~FizzBuzzStep3() = default;

	std::string Run(unsigned int first, unsigned int last) const override;
};

