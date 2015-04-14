#pragma once
#include "FizzBuzzStep1.h"

class FizzBuzzStep2 :
	public FizzBuzzStep1
{
public:
	FizzBuzzStep2() = default;
	virtual ~FizzBuzzStep2() = default;

protected:
	virtual std::string ValueToDisplay(unsigned int i) const override;
};

