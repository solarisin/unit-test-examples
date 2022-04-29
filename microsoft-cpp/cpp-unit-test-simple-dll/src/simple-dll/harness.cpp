#include "pch.h"
#include "harness.h"

namespace simple_dll
{
	/**
	 * \brief Example exported member function to be unit tested
	 * \param pass_through integer result value to return
	 * \return the function result
	 */
	int SIMPLEDLL_API TestHarness::ExampleFunction(int pass_through)
    {
        return pass_through;
    }

}