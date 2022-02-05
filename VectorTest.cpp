#include "TestHarness.h"

#include <vector>

TEST(vectorIntEquality, vector)
{
	std::vector<int> testVector = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto index : testVector)
	{
		CHECK_EQUAL(index, testVector.at(index));
	}
}

