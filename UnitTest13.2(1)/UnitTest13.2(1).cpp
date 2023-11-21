#include "pch.h"
#include "CppUnitTest.h"
#include "../Project13.2(1)/Array.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int ARRAY_SIZE = 10;
			int numbers[ARRAY_SIZE];

			generateArray(numbers, ARRAY_SIZE, 10);

			// Add assertions to test the generated array
			// For example:
			Assert::AreEqual(10, numbers[0]);
			Assert::AreEqual(10, numbers[1]);
		}
	};
}
