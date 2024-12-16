#include "pch.h"
#include "CppUnitTest.h"
#include "../SWEUnitTestClass/Calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			/*Assert::AreEqual(1, 1);*/
			int store1 = Calculator::Add(5, 5);
			Assert::AreEqual(10, store1);
		}
		TEST_METHOD(TestMethod2) 
		{
			/*Assert::AreNotEqual(1, 2);
			Calculator::Add(1, 1);*/
			int store1 = Calculator::Add(1, 1);
			Assert::AreNotEqual(3, store1);
		}
		
	};
}
