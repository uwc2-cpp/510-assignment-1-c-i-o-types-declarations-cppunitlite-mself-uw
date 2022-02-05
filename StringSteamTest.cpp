#include "TestHarness.h"

#include <string>
using namespace std;

TEST(doubleToStream, stringstream)
{
    stringstream message; 
    message << 5.0;
    double value;
    message >> value;
    CHECK_DOUBLES_EQUAL(5.0, value, numeric_limits<double>::epsilon())
}

TEST(floatToStream, stringstream)
{
    stringstream message;
    message << 5.0f;
    float value;
    message >> value;
    CHECK_DOUBLES_EQUAL(5.0f, value, numeric_limits<float>::epsilon())
}

TEST(stringToStream, stringstream)
{
    stringstream message;
    message << "Hello";
    string testString;
    message >> testString;
    CHECK_EQUAL("Hello", testString)
}

TEST(streamToIntFailure, stringstream)
{
    stringstream message("Hello");
    int testInt;
    message >> testInt;
    if (!message)
    {
    }
    else
    {
        CHECK_FAIL("Streaming of string to int DID NOT fail but it should have");
    }   
}
