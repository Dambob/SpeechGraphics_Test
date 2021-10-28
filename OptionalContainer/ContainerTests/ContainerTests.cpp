#include "pch.h"
#include "CppUnitTest.h"
//#include "../UnitTesting/Headers/XXX.h"
//#include "../UnitTesting/Source/XXX.cpp"
#include "../OptionalContainer/Headers/Optional.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ContainerTests
{
	TEST_CLASS(ContainerTests)
	{
	public:
		
		TEST_METHOD(SetValue)
		{
			Assert::AreEqual(1, 2);
		}

		TEST_METHOD(GetValue)
		{
			Assert::AreEqual(1, 2);
		}

		TEST_METHOD(CheckValue)
		{
			Assert::AreEqual(1, 2);
		}

		TEST_METHOD(ClearValue)
		{
			Assert::AreEqual(1, 2);
		}
	};
}
