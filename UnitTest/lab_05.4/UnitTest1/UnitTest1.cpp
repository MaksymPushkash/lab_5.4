#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.4/lab_05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForSum
{
	TEST_CLASS(UnitTestForSum)
	{
	public:
		
		double expected_result(int K, int N) {
			double sum = 0;
			for (int i = K; i <= N; i++) {
				sum += (1 + sqrt(1 + i * i)) / (i * i);
			}
			return sum;
		}

		TEST_METHOD(TestS0)
		{
			
			double expected = expected_result(1, 5); 
			double result = S0(1, 5);
			Assert::AreEqual(expected, result, 0.0001, L"Incorrect result for S0");
		}

		TEST_METHOD(TestS1)
		{
			
			double expected = expected_result(1, 5); 
			double result = S1(1, 5, 1);
			Assert::AreEqual(expected, result, 0.0001, L"Incorrect result for S1");
		}

		TEST_METHOD(TestS2)
		{
			
			double expected = expected_result(1, 5); 
			double result = S2(1, 5, 5);
			Assert::AreEqual(expected, result, 0.0001, L"Incorrect result for S2");
		}

		TEST_METHOD(TestS3)
		{
			
			double expected = expected_result(1, 5); 
			double result = S3(1, 5, 1, 0);
			Assert::AreEqual(expected, result, 0.0001, L"Incorrect result for S3");
		}

		TEST_METHOD(TestS4)
		{
			
			double expected = expected_result(1, 5); 
			double result = S4(1, 5, 5, 0);
			Assert::AreEqual(expected, result, 0.0001, L"Incorrect result for S4");
		}
	};
}

