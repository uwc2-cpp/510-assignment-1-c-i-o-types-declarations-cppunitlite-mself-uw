#include "TestHarness.h"

TEST(newAllocation, newheapallocation)
{
	int* testArray = new int[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	if (testArray == nullptr)
	{
		CHECK_FAIL("Allocation of new testArray failed");
		return;
	}
	for (int index = 0; index < 10; index++)
	{
		CHECK_EQUAL(index, testArray[index])
	}
	delete testArray;
}
