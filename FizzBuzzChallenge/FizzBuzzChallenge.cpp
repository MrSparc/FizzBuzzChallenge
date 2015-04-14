// FizzBuzzChallenge.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <iostream>
#include "FizzBuzzStep1.h"
#include "FizzBuzzStep2.h"
#include "FizzBuzzStep3.h"


int main(int argc, wchar_t* argv[])
{
	std::cout << std::endl << "Step 1 - Range 1 to 20:" << std::endl;
	FizzBuzzStep1 fb1;
	std::cout << fb1.Run(1, 20) << std::endl;

	std::cout << std::endl << "Step 2 - Range 1 to 20:" << std::endl;
	FizzBuzzStep2 fb2;
	std::cout << fb2.Run(1, 20) << std::endl;

	std::cout << std::endl << "Step 3 - Range 1 to 20:" << std::endl;
	FizzBuzzStep3 fb3;
	std::cout << fb3.Run(1, 20) << std::endl;

	std::cout << std::endl << "Step 3 - Range 1 to 40:" << std::endl;
	std::cout << fb3.Run(1, 40) << std::endl;
	return 0;
}

