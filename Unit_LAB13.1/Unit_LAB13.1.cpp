#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_13.1/var.h"
#include"../Lab_13.1/var.cpp"
#include"../Lab_13.1/sum.h"
#include"../Lab_13.1/sum.cpp"
#include"../Lab_13.1/dod.h"
#include"../Lab_13.1/dod.cpp"
#include"../Lab_13.1/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitLAB131
{
	TEST_CLASS(UnitLAB131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1.0;
			double x = 3.0;
			double n = 2.0;
		    a = x * x * (2. * n - 1.0) / (2. * n + 1.0);
			double expected_result = 5.4;
			Assert::AreEqual(expected_result, a, 0.000001);

		}
	};
}
