
#include "pch.h"
#include "CppUnitTest.h"
#include "../laba05.3/laba05.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
    TEST_CLASS(UnitTest3)
    {
    public:

        TEST_METHOD(TestFunctionF)
        {
            double result = f(0.5);
            double expected = 0.5210953;

            Assert::AreEqual(expected, result, 0.000001);
        }
    };
}
