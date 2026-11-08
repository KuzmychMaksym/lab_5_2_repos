#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_2/lab_5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;

			t = arcctg(-1);

			Assert::AreEqual(3 * numbers::pi / 4, t);
		}

		TEST_METHOD(TestMethod2)
		{
			int n = 0;
			double dodatok = 1;
			double esp = 0.000001;

			sprochenya(-1, esp, n, dodatok);

			double expectedResult = 3 * numbers::pi / 4;
			double expectedRoundedResult = round((expectedResult / esp)) * esp;
			double actualRoundedResult = round((dodatok / esp)) * esp;

			Assert::AreEqual(expectedRoundedResult, actualRoundedResult);
		}
	};
}
