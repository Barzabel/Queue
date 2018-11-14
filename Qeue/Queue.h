#pragma once
#ifndef _QUEUE_
#define _QUEUE_
#include"steck/steck.h"





template<class T>
class Queue {
public:
	Queue();

	void enqueue(T item);

	T dequeue();

	unsigned int size();

	~Queue();
private:
	Steck<T> *In;
	Steck<T> *Out;
	unsigned int count;

};













#include "queue.ipp"
#endif // !_QUEUE_

