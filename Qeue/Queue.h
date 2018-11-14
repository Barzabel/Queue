#pragma once
#ifndef _QUEUE_
#define _QUEUE_
#include"Linkedlist/LinkedList2.h"
#include<cmath>




template<class T>
class Queue:private LinkedList2<T> {
public:
	Queue();

	void enqueue(T item);

	T dequeue();

	unsigned int size();

	T peek();

	~Queue();
private:
	
	

};




template<class T>
void fun(Queue<T> &a, int n) {
	for (int i = 0; i < abs(n); i++)
	{
		a.enqueue(a.dequeue());
	}
}










#include "queue.ipp"
#endif // !_QUEUE_

