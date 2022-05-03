#include "pch.h"
#include <iostream>
#include "CppUnitTest.h"

// Test function includes
#include "../../src/simple-dll/harness.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ms_cpp_unit_test
{
	TEST_CLASS(SimpleDllTest)
	{
	public:
		/// <summary>
		/// Example test function which instantiates an imported class and runs a test on its functionality.
		/// </summary>
		TEST_METHOD(ExampleTestMethod)
		{
			simple_dll::TestHarness harness;

			constexpr int expected = 1;
			const int result = harness.ExampleFunction(expected);

			Assert::AreEqual(expected, result);
		}
	};
}
