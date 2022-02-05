#include "TestHarness.h"

#include <array>

TEST(arrayOfFloats, array)
{
	std::array<float, 10> testArray = { 0.0f, 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f };

	for (auto index = 0; index < 10; index++)
	{
		CHECK_DOUBLES_EQUAL((float)index, testArray[index], std::numeric_limits<float>::epsilon());
	}
}
