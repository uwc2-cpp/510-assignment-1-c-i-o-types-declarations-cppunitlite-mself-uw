#include "TestHarness.h"

// To add your own unit tests
// 
// 1) Rename this file using a name that describes the software entity under test. E.g., if you were testing std::vector
//    rename this file as VectorTest.cpp
// 2) Add additional test files as needed. E.g., if you were testing a class named Animal and another class named Zoo you
//    would have two test files. AnimalTest.cpp and ZooTest.cpp
// 3) Remove the sample tests from this file

#include <string>
#include <iostream>

TEST(doubleToStream, stringstream)
{
    std::stringstream message; 
    message << 5.0;
    double value;
    message >> value;
    CHECK_DOUBLES_EQUAL(5.0, value, std::numeric_limits<double>::epsilon())
}

TEST(floatToStream, stringstream)
{
    std::stringstream message;
    message << 5.0f;
    float value;
    message >> value;
    CHECK_DOUBLES_EQUAL(5.0f, value, std::numeric_limits<float>::epsilon())
}

TEST(stringToStream, stringstream)
{
    std::stringstream message;
    message << "Hello";
    std::string testString;
    message >> testString;
    CHECK_EQUAL("Hello", testString)
}

TEST(streamToIntFailure, stringstream)
{
    std::stringstream message("Hello");
    int testInt;
    message >> testInt;
    if (!message)
    {
    }
    else
    {
        CHECK_FAIL("Streaming of String to Int DID NOT fail but it should have");
    }   
}
