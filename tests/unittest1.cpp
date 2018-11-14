#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Project9/Queue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace queue
{
	TEST_CLASS(queue)
	{
	public:

		TEST_METHOD(enqueue)
		{
			Queue<int> a;
			a.enqueue(1);
			Assert::IsTrue((a.size() == 1) && (a.dequeue() == 1));
			a.enqueue(1);
			a.enqueue(2);
			a.enqueue(3);
			Assert::IsTrue((a.size() == 3) && (a.dequeue() == 1));
		}
		TEST_METHOD(dequeue)
		{
			Queue<int> a;
			for (int i = 0; i < 20; i++) {
				a.enqueue(i);
			}
			for (int i = 0; i < 20; i++) {
				Assert::IsTrue((a.size() == 20 - i) && (a.dequeue() == i));
			}
		}
		TEST_METHOD(fun)
		{
			Queue<int> a;
			for (int i = 0; i < 20; i++) {
				a.enqueue(i);
			}
			::fun(a, 19);

			for (int i =0; i <20; i++) {
				Assert::IsTrue( a.dequeue() ==(19+i)%20);
			}
				
		
		
		
		
		
		}



	};
}