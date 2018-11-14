#pragma once




template<class T>
Queue<T>::Queue(){
	
}

template<class T>
unsigned int Queue<T>::size() {



	return this->getsize();
}


template<class T>
void Queue<T>::enqueue(T item) {
	Node2<T> *p = new	Node2<T>(item);
	
	this->add_in_tail(p);
}

template<class T>
T Queue<T>::dequeue() {
	 
	T res = this->gethead()->value;
	this->delhead();
	return res;
}


template<class T>
T Queue<T>::peek() {
	return this->gethead()->value;
}

template<class T>
Queue<T>::~Queue() {


}