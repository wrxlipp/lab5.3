#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.3/Lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTLab53
{
	TEST_CLASS(UTLab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{	
			double r = 0.89;
			double k = h(1 + sqrt(r)) + pow((1 + r + pow(h(r), 2)), 2);
			Assert::IsTrue(k <= 10);
		}
	};
}
