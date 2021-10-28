#include "pch.h"
#include "CppUnitTest.h"
//#include "../UnitTesting/Headers/XXX.h"
//#include "../UnitTesting/Source/XXX.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ContainerTests
{
	TEST_CLASS(ContainerTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1, 1);
		}
	};
}
