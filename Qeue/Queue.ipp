#pragma once




template<class T>
Queue<T>::Queue():count(0) {
	this->In = new Steck<T>;
	this->Out = new Steck<T>;
}

template<class T>
unsigned int Queue<T>::size() {



	return this->count;
}


template<class T>
void Queue<T>::enqueue(T item) {
	this->In->push(item);
	this->count++;
}

template<class T>
T Queue<T>::dequeue() {
	T res = 0;
	while (this->In->Size() > 0) {
		this->Out->push(this->In->pop());
	}
	if (Out->Size() > 0) {
		res = Out->pop();
	}
	
	while (this->Out->Size() > 0) {
		this->In->push(this->Out->pop());
	}
	this->count--;
	return res;
}


template<class T>
T Queue<T>::peek() {
	T res = 0;
	while (this->In->Size() > 0) {
		this->Out->push(this->In->pop());
	}
	if (Out->Size() > 0) {
		res = Out->peek();
	}

	while (this->Out->Size() > 0) {
		this->In->push(this->Out->pop());
	}
	return res;
}

template<class T>
Queue<T>::~Queue() {

	delete In;
	delete Out;
}