#pragma once

#ifdef SIMPLEDLL_EXPORTS
#define SIMPLEDLL_API __declspec(dllexport)
#else
#define SIMPLEDLL_API __declspec(dllimport)
#endif

namespace simple_dll
{
	/**
	 * \brief Example dll-exported class to be unit tested
	 */
	class SIMPLEDLL_API TestHarness
	{
	public:
		TestHarness() = default;
		int ExampleFunction(int pass_through);
	};
}
