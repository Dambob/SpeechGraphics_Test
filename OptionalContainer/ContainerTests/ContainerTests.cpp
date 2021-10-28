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
		
		TEST_METHOD(ConstructNoValue)
		{
			// Setup
			Optional<int> o;

			Assert::IsFalse(o.isSet());	// Check that flag is not set
		}

		TEST_METHOD(ConstructHasValue)
		{
			// Setup
			int value = 10,
				emptyValue = -1;
			Optional<int> o(value);

			Assert::IsTrue(o.isSet());							// Check that the flag has been set
			Assert::AreEqual(o.get_or(emptyValue), value);		// Check that the value has been set 
		}

		TEST_METHOD(ConstructorCopy)
		{
			// Setup
			int value = 10,
				emptyValue = -1;
			Optional<int> o(value);

			// Work
			Optional<int> copied = o;

			Assert::IsTrue(o.isSet());							// Check that the flag has not been changed
			Assert::AreEqual(o.get_or(emptyValue), value);		// Check that the has not been changed

			Assert::IsTrue(copied.isSet());							// Check that the flag has been set
			Assert::AreEqual(copied.get_or(emptyValue), value);		// Check that the value has been set 
		}

		TEST_METHOD(SetValue)
		{
			// Setup
			int value = 10,
				emptyValue = -1;
			Optional<int> o;

			// Work
			o.set(value);

			Assert::IsTrue(o.isSet());							// Check that the flag has been set
			Assert::AreEqual(o.get_or(emptyValue), value);		// Check that the value has been set 
		}

		TEST_METHOD(GetValueConstructor)
		{
			// Setup
			int value = 10,
				emptyValue = -1;
			Optional<int> o(value);

			Assert::AreEqual(o.get_or(emptyValue), value);		// Check that the value has been set 
		}

		TEST_METHOD(GetValueSetter)
		{
			// Setup
			int value = 10,
				emptyValue = -1;
			Optional<int> o;

			// Work
			o.set(value);

			Assert::AreEqual(o.get_or(emptyValue), value);		// Check that the value has been set 
		}

		TEST_METHOD(ClearValue)
		{
			// Setup
			int value = 10,
				emptyValue = -1;
			Optional<int> o(value);

			// Works
			o.clear();

			Assert::IsFalse(o.isSet());	// Check that flag is not set
		}
	};
}
