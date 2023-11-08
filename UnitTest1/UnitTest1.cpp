#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7.1r/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 1;
			int j = 1;
			int** a = { };
			const int rowCount = 3;
			const int colCount = 4;
			Print( a,  rowCount,  colCount, i,j);
			Assert::AreEqual(3, 4);
		}
	};
}
