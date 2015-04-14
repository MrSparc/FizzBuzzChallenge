#include <iostream>
#include <string>
#include "FizzBuzzStep3.h"

#include "CppUnitTest.h"
#pragma
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FizzBuzzChallengeTest
{
	TEST_CLASS(FizzBuzzStep3Test)
	{
	public:

		TEST_METHOD(Step3RangeInvalid)
		{
			wchar_t message[200];
			FizzBuzzStep3 fbs3;
			int start = 20;
			int end = 1;
			try
			{
				// Should raise an exception:
				std::cout << fbs3.Run(start, end);

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

		TEST_METHOD(Step3Range_1to20)
		{
			FizzBuzzStep3 fbs3;
			std::ostringstream os;
			os << "1 2 lucky 4 buzz fizz 7 8 fizz buzz 11 fizz lucky 14 fizzbuzz 16 17 fizz 19 buzz" << std::endl << 
				"fizz: 4" << std::endl <<
				"buzz: 3" << std::endl <<
				"fizzbuzz: 1" << std::endl <<
				"lucky: 2" << std::endl <<
				"integer: 10";
			std::string expected = os.str();

			Assert::AreEqual(expected, fbs3.Run(1, 20));
		}

	};
}
		

