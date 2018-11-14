#pragma once
#ifndef _QUEUE_
#define _QUEUE_
#include"steck/steck.h"
#include<cmath>




template<class T>
class Queue {
public:
	Queue();

	void enqueue(T item);

	T dequeue();

	unsigned int size();

	T peek();

	~Queue();
private:
	Steck<T> *In;
	Steck<T> *Out;
	unsigned int count;

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

