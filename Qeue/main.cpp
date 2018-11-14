#include<iostream>
#include"Queue.h"

using namespace std;




int main() {
	Queue<int> a;
	for (int i = 0; i < 20; i++) {
		a.enqueue(i);
	}
	fun(a, 19);
	for (int i = 0; i < 20; i++) {
		cout<<a.dequeue()<<endl;
	}


	return 0;
}