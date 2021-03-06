#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.6/Triangle.cpp"
#include "../Lab_1.6/Triad.cpp"
#include "../Lab_1.6/Unit_Test_Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab16
{
	TEST_CLASS(UnitTestLab16)
	{
	public:
		
		TEST_METHOD(Test_Triad)
		{
			Triangle a;
			Assert::AreEqual(a.Unit_Test_Triad(), 20.0);
		}

		TEST_METHOD(Test_Triangle)
		{
			Triangle a;
			a.Unit_Test_Triangle();
			Assert::AreEqual(a.Calcul_Square(), 12.0);
		}
	};
}
