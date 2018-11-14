#include<iostream>
#include"Queue.h"
using namespace std;



int main() {
	Queue<int> a;
	a.enqueue(1);
	a.enqueue(2);
	a.enqueue(3);
	a.enqueue(4);
	a.enqueue(5);

	cout << a.dequeue()<<endl;
	cout << a.dequeue() << endl;

	return 0;
}