#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue<int> Q(10);

	Q.enqueue(3);
	Q.print();
	Q.enqueue(6);
	Q.print();
	Q.enqueue(7);
	Q.print();
	Q.dequeue();
	Q.print();
	Q.dequeue();
	Q.print();
	Q.enqueue(1);
	Q.print();
	Q.dequeue();
	Q.print();
	Q.dequeue();
	Q.print();


	system("pause");
}