#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_6.2-r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT
{
	TEST_CLASS(UT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int mass[6] = { 1, -30, -24, 18, 9, -3 };
			Assert::AreEqual(do_stuff(mass, 6,0,0), 9.);

		}
	};
}
