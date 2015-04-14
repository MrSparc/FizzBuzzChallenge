#include <iostream>
#include <string>
#include "FizzBuzzStep1.h"

#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FizzBuzzChallengeTest
{		
	TEST_CLASS(FizzBuzzStep1Test)
	{
	public:
		
		TEST_METHOD(Step1RangeInvalid)
		{
			wchar_t message[200];
			FizzBuzzStep1 fbs1;
			int start = 20;
			int end = 1; 
			try
			{
				// Should raise an exception:
				std::cout << fbs1.Run(start, end);
				
				_swprintf(message, L"No exception for invalid range (start:%d > end:%d)", start, end);
				Assert::Fail(message, LINE_INFO());
			}
			catch (std::out_of_range ex)
			{
				// Correct exception.
			}
			catch (...)
			{
				_swprintf(message, L"Incorrect exception for start:%d , end:%d", start, end);
				Assert::Fail(message, LINE_INFO());
			}
		}

		TEST_METHOD(Step1Range_1to20)
		{
			FizzBuzzStep1 fbs1;
			std::string expected = "1 2 fizz 4 buzz fizz 7 8 fizz buzz 11 fizz 13 14 fizzbuzz 16 17 fizz 19 buzz";

			Assert::AreEqual(expected, fbs1.Run(1, 20));
		}

	};
}