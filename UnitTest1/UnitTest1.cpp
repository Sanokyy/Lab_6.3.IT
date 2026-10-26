
#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63IT
{
    TEST_CLASS(UnitTest63IT)
    {
    public:

        int SumEven(int a[], int n)
        {
            int sum = 0;

            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    sum = sum + a[i];
                }
            }

            return sum;
        }

        template <typename T>
        T SumEven(T a[], int n)
        {
            T sum = T();

            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    sum = sum + a[i];
                }
            }

            return sum;
        }

        TEST_METHOD(Test1)
        {
            int a[6] = { 2, 7, 4, 9, -6, 8 };
            Assert::AreEqual(8, SumEven(a, 6));
        }

        TEST_METHOD(Test2)
        {
            int a[5] = { 1, 3, 5, 7, 9 };
            Assert::AreEqual(0, SumEven(a, 5));
        }

        TEST_METHOD(Test3)
        {
            int a[4] = { 2, 4, 6, 8 };
            Assert::AreEqual(20, SumEven(a, 4));
        }

        TEST_METHOD(Test4)
        {
            int a[5] = { -2, -4, 3, 5, 0 };
            Assert::AreEqual(-6, SumEven<int>(a, 5));
        }
    };
}
