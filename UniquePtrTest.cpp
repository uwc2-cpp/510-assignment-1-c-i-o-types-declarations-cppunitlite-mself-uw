#include "TestHarness.h"

TEST(unique_ptrTest, int)
{
    auto intValues = std::make_unique<int[]>(10);
    for (auto index = 0; index < 10; index++)
    {
        intValues[index] = index;
        CHECK_EQUAL(index, intValues[index]);
    }
}
